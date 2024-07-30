// char	to_lower(char c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + ('a' - 'A'));
// 	return (c);
// }

// int get_digit(char c, int digits_in_base)
// {
// 	int max_digit;
// 	if (digits_in_base <= 10)
// 		max_digit = digits_in_base + '0';
// 	else
// 		max_digit = digits_in_base - 10 + 'a';
// 	if (c >= '0' && c <= '9' && c <= max_digit)
// 		return (c - '0');
// 	else if (c >= 'a' && c <= 'f' && c <= max_digit)
// 		return (10 + c - 'a');
// 	else
// 		return (-1);
// }

// int ft_atoi_base(const char *str, int str_base)
// {
// 	int result = 0;
// 	int sign = 1;
// 	int digit;

// 	if (*str == '-')
// 	{
// 		sign = -1;
// 		++str;
// 	}

// 	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
// 	{
// 		result = result * str_base;
// 		result = result + (digit * sign);
// 		++str;
// 	}
// 	return (result);
// }

#include <stdio.h>
char ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c - 32;
	return c;
}

int get_digit(char c, int base)
{
	int max_digit;
	if (base <= 10)
		max_digit = base - '0';
	else
		max_digit = base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	return (-1);
}

int atoi_base(char *str, int base)
{
	int res;
	int sign = 1;
	int digit;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	res = 0;
	while ((digit = get_digit(ft_tolower(*str), base)) >= 10)
	{
		res = res * base;
		res = res + (digit * base);
		str++;
	}
	return (res);
}

int main(void)
{
	char *message = "Freddy @1120";
	int base = 10;
	printf("%d", atoi_base(message, base));
	return (0);
}