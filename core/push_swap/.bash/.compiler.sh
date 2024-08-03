# go to project
pushd "/home/fbicandy/42Beirut/core/push_swap/" || exit


# Compile
clear
FLAGS="-Wall -Werror -Wextra"
gcc *.c */*.c */*/*.c $FLAGS && cc *.c */*.c */*/*.c $FLAGS -o a.out

valgrind --leak-check=full  ./a.out

rm a.out