#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;
	char	*str2;
	char	*str3;
	int		result;

	str = "1234567890";
	str2 = "1234567890";
	str3 = "abcdefghij";
	result = ft_str_is_numeric(str);
	printf("%d\n", result);
	result = ft_str_is_numeric(str2);
	printf("%d\n", result);
	result = ft_str_is_numeric(str3);
	printf("%d\n", result);
}
