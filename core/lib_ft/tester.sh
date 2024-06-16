#!/bin/bash
cd /home/fbicandy/42Beirut/core/libft/ && make
clear && cd /home/fbicandy/42Beirut/core/libft/libftTester

FT="ft_"
clear
echo "************************************TEST BEGIN*************************************************************"
make isalnum   | grep "isalnum"
make isalnum   | grep "isalnum"
make strchr    | grep "strchr"
make isalpha   | grep "isalpha"
make isdigit   | grep "isdigit"
make strlen    | grep "strlen"
make tolower   | grep "tolower"
make toupper   | grep "toupper"
make isascii   | grep "isascii"
make isprint   | grep "isprint"
make memset    | grep "memset"
make bzero     | grep "bzero"
make memcpy    | grep "memcpy"
make memmove   | grep "memmove"
make strlcpy   | grep "strlcpy"
make strlcat   | grep "strlcat"
make strrchr   | grep "strrchr"
make strncmp   | grep "strncmp"
echo "************************************TEST END*************************************************************"
make fclean