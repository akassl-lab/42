#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	int		r;

	str = "1234567890";
	r = ft_str_is_alpha(str);
	printf("%d\n", r);
	str = "abcdefgHIJKL";
	r = ft_str_is_alpha(str);
	printf("%d\n", r);
	str = "123ABC";
	r = ft_str_is_alpha(str);
	printf("%d\n", r);
}
