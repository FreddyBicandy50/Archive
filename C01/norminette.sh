#!/bin/bash
clear
# Define a function called "norm"
norm() {
    cd "$1" || exit 1  # Change directory to the provided argument
    echo "$1->" && norminette >> /home/fbicandy/piscine/C01/norm  # Append norminette output to the "norm" file
    cd ..  # Move back to the parent directory
    
}

# Call the function for each directory
norm ex00
norm ex01
norm ex02
norm ex03
norm ex04
norm ex05
norm ex06
norm ex07
norm ex08

cat norm && rm norm