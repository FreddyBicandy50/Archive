# go to project
pushd "/home/fbicandy/42Beirut/core/push_swap/" || exit


# Compile
clear
FLAGS="-Wall -Werror -Wextra"
gcc *.c $FLAGS && cc *.c $FLAGS -o a.out

./a.out

rm a.out