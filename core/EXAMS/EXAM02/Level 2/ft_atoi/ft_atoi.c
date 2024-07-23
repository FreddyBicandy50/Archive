// int	ft_atoi(char *str)
// {
// 	int result = 0;
// 	int sign = 1;

// 	while (*str == ' ' || (*str >= 9 && *str <= 13))
//         	str++;
// 	if (*str == '-')
// 		sign = -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		result = result * 10 + *str - '0';
// 		str++;
// 	}
// 	return (sign * result);
// }

// #include <stdio.h>
// #include <stdlib.h>
// int ft_atoi(const char *str)
// {
// 	int result;
// 	int sign;

// 	result = 0;
// 	sign = 1;

// 	while (*str == ' ' || (*str >= 9 && *str <= 13))
// 		str++;
// 	if (*str == '-')
// 		sign = -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		result = result * 10 + *str - '0';
// 		str++;
// 	}
// 	return (result * sign);
// }

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] != '-' || str[i] != '+')
	{
		if (str[i] != '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + *str - '0';
		i++;
	}

	return (result * sign);
}

int main(void)
{
	printf("%d\n", atoi("-123"));
	printf("%d", ft_atoi("-123"));
	return (0);
}