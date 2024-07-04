# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    monitoring.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/02 20:32:41 by fbicandy          #+#    #+#              #
#    Updated: 2024/07/03 18:23:49 by fbicandy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

clear

arch=$(uname -a)
physical_cpu=$(cat /proc/cpuinfo | grep "physical id"  | sort | uniq | wc -l)

Tram=$(free -m | grep "Mem:"  | awk '{print($2)}')
Uram=$(free -m | grep "Mem:" | awk '{print($3)}')
Pram=$(free | grep "Mem:"  | awk '{printf("%.2f"),$3/$2*100}')"%"
dTotal=$(df -Bg | grep  '^/dev/' | awk '{print($2)}' | sort -hr)
dUsage=$(df -Bg | grep  '^/dev/' | awk '{print($3)}' | sort -hr)
dAvail=$(df -Bg | grep  '^/dev/' | awk '{printf("%.2f"),$3/$2*100}' | sort -hr)
cpuload=$(top -bn1 | grep "^%Cpu"| xargs | awk '{printf("%.1f"),$2 + $4}')
lboot=$(who -b | awk '{print($3)} {print($4)}')
lvmCheck=$(lsblk | grep "lvm"  | wc -l)
lvmUs=$(if [$lvmCheck -eq 0]; then echo no; else echo yes; fi)
tcp_conn=$(cat sockstat{,6} | grep "TCP" | awk '{print $2}' | uniq)


IP=$(hostname -I | awk '{print($1)}')
MAC=$(ifconfig  | grep ether | awk '{print($2)}')

echo "          System"
echo $arch
echo "          Ram"
echo "Memory Usage:" $Tram/${Uram}MB "($Pram)"
echo "Disk Usage:" $dTotal/$dUsage "($dAvail)%"
echo "Cpu Load:" "$cpuload%"
echo "Last Boot:" $lboot
echo "          Networking"
echo "IP:" $IP 
echo "MAC:" $MAC