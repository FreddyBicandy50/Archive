# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    monitoring.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/02 20:32:41 by fbicandy          #+#    #+#              #
#    Updated: 2024/07/03 16:02:59 by fbicandy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

clear

arch=$(uname -a)
physical_cpu=$(cat /proc/cpuinfo | grep "physical id"  | sort | uniq | wc -l)

Tram=$(free -h | grep "Mem:"  | awk '{print($2)}')
Uram=$(free -h | grep "Mem:" | awk '{print($3)}')
Pram=$(free | grep "Mem:"  | awk '{printf("%.2f"),$3/$2*100}')"%"

echo $arch
echo "          Ram"
echo "Total:"$Tram
echo "Usage:"$Uram
echo "Memory Usage:" $Tram/${Uram}MB "($Pram)"
