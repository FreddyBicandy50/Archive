#!/bin/bash

# Run check 
clear  && cd /home/fbicandy/42Beirut/libft-war-machine && bash grademe.sh > res 

# FT
ft="ft_"

# FUNCTIONS
putchar_fd="${ft}putchar_fd"
putstr_fd="${ft}putstr_fd"
striteri="${ft}striteri"
isalnum="${ft}isalnum"
isalpha="${ft}isalpha"
isdigit="${ft}isdigit"
tolower="${ft}tolower"
toupper="${ft}toupper"
isascii="${ft}isascii"
isprint="${ft}isprint"
memmove="${ft}memmove"
strlcpy="${ft}strlcpy"
strlcat="${ft}strlcat"
strrchr="${ft}strrchr"
strncmp="${ft}strncmp"
strnstr="${ft}strnstr"
strjoin="${ft}strjoin"
strtrim="${ft}strtrim"
strmapi="${ft}strmapi"
memcpy="${ft}memcpy"
memchr="${ft}memchr"
memcmp="${ft}memcmp"
strchr="${ft}strchr"
strlen="${ft}strlen"
memset="${ft}memset"
calloc="${ft}calloc"
strdup="${ft}strdup"
substr="${ft}substr"
split="${ft}split"
bzero="${ft}bzero"
itoa="${ft}itoa"
atoi="${ft}atoi"
putendl_fd="${ft}putendl_fd"
putnbr_fd="${ft}putnbr_fd"
# "********************************************BONUS**********************************************"
lstnew="${ft}lstnew"
lstadd_front="${ft}lstadd_front"
lstsize="${ft}lstsize"
lstlast="${ft}lstlast"
lstadd_back="${ft}lstadd_back"
# "********************************************NEW**********************************************"
lstdelone="${ft}lstdelone"

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
grep "$striteri" res
grep "$putchar_fd" res
grep "$putstr_fd" res
grep "$putendl_fd" res
grep "$putnbr_fd" res
echo "********************************************BONUS**********************************************"
grep "$lstnew" res
grep "$lstadd_front" res
grep "$lstsize" res
grep "$lstlast" res
grep "$lstadd_back" res
grep "$lstdelone" res
echo "********************************************NEW**********************************************"
