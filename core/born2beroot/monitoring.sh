# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    monitoring.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/02 20:32:41 by fbicandy          #+#    #+#              #
#    Updated: 2024/07/03 19:12:40 by fbicandy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

clear

Arch=$(uname -a)
COM=$(journalctl | grep COMMAND | wc -l )
Pcpu=$(cat /proc/cpuinfo | grep "physical id"  | sort | uniq | wc -l)
Vcpu=$(cat /proc/cpuinfo  | grep "^processor" | wc -l)


Tram=$(free -m | grep "Mem:"  | awk '{print($2)}')
Uram=$(free -m | grep "Mem:" | awk '{print($3)}')
Pram=$(free | grep "Mem:"  | awk '{printf("%.2f"),$3/$2*100}')"%"
dTotal=$(df -Bg | grep  '^/dev/' | awk '{print($2)}' | sort -hr)
dUsage=$(df -Bg | grep  '^/dev/' | awk '{print($3)}' | sort -hr)
dAvail=$(df -Bg | grep  '^/dev/' | awk '{printf("%.2f"),$3/$2*100}' | sort -hr)
cpuload=$(top -bn1 | grep "^%Cpu"| xargs | awk '{printf("%.1f"),$2 + $4}')

lboot=$(who -b | awk '{print($3)} {print($4)}')
lboot_by=$( who | awk '{print($1)}')
lvmCheck=$(lsblk | grep "lvm"  | wc -l)


tcp_conn=$(cat /proc/net/sockstat{,6} | grep "TCP" | awk '{print $2}' | uniq)
IP=$(hostname -I | awk '{print($1)}')
MAC=$(ifconfig  | grep ether | awk '{print($2)}')

sudo wall "
**************************************System***********************************
$Arch

#Last Boot Record: $lboot BY($lboot_by)
#Total Commands: $COM 

**************************************Resources********************************
#Physical CPU:$Pcpu Threads:$Vcpu
#Cpu Load: $cpuload%
#Memory Usage:$Tram/${Uram}MB ($Pram)
#Disk Usage: $dTotal/$dUsage ($dAvail)%
#LVM Usage: $lvmCheck

*************************************Networking********************************
#TCP Connection: $tcp_conn
#IP $IP | MAC $MAC
"