# go to project
pushd "/home/fbicandy/42Beirut/core/push_swap/" || exit


# Compile
make fclean  && make && make clean
clear
valgrind --leak-check=full  ./push_swap

rm -rf push_swap