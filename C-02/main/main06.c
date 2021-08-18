#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;
	char	*str2;
	char	*str3;
	int		result;

	str = "1234567890";
	str2 = "ABAS";
	str3 = "";
	result = ft_str_is_printable(str);
	printf("%d\n", result);
	result = ft_str_is_printable(str2);
	printf("%d\n", result);
	result = ft_str_is_printable(str3);
	printf("%d\n", result);
}
