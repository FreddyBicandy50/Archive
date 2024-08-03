# go to project
pushd "/home/fbicandy/42Beirut/core/push_swap/" || exit


# Compile
make && make clean
clear
valgrind --leak-check=full  ./push_swap

rm a.out