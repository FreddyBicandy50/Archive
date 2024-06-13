#!/bin/bash
function_name="ft_isprint"

# Run check 
clear  && cd /home/fbicandy/42Beirut/core/libft-war-machine && bash grademe.sh > res 

# Use grep to find occurrences of the function name in the output
grep "$function_name" res
