#!/bin/bash

# Run check 
clear  && cd /home/fbicandy/42Beirut/libft-war-machine && bash grademe.sh > res 

# FT
ft="ft_"

# FUNCTIONS
isalnum="${ft}isalnum"
strchr="${ft}strchr"
isalpha="${ft}isalpha"
isdigit="${ft}isdigit"
strlen="${ft}strlen"
tolower="${ft}tolower"
toupper="${ft}toupper"
isascii="${ft}isascii"
isprint="${ft}isprint"
memset="${ft}memset"
bzero="${ft}bzero"
memcpy="${ft}memcpy"
memmove="${ft}memmove"
strlcpy="${ft}strlcpy"
strlcat="${ft}strlcat"
strrchr="${ft}strrchr"
strncmp="${ft}strncmp"
memchr="${ft}memchr"
memcmp="${ft}memcmp"
strnstr="${ft}strnstr"
atoi="${ft}atoi"
calloc="${ft}calloc"
strdup="${ft}strdup"
substr="${ft}substr"
strjoin="${ft}strjoin"
strtrim="${ft}strtrim"
split="${ft}split"
itoa="${ft}itoa"
# "********************************************NEW**********************************************"
strmapi="${ft}strmapi"

# Use grep to find occurrences of the function name in the output
grep "$isalnum" res
grep "$strchr" res
grep "$isalpha" res
grep "$isdigit" res
grep "$strlen" res
grep "$tolower" res
grep "$toupper" res
grep "$isascii" res
grep "$isprint" res
grep "$memset" res
grep "$bzero" res
grep "$memcpy" res
grep "$memmove" res
grep "$strlcpy" res
grep "$strlcat" res
grep "$strrchr" res
grep "$strncmp" res
grep "$memchr" res
grep "$memcmp" res
grep "$strnstr" res
grep "$atoi" res
grep "$strdup" res
grep "$calloc" res
grep "$substr" res
grep "$strjoin" res
grep "$strtrim" res
grep "$split" res
grep "$strmapi" res
grep "$itoa" res
echo "********************************************NEW**********************************************"
