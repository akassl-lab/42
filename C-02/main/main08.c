#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[7] = {'A', 'B', 'E', 'Z', '1'};

	ft_strlowcase(str);
	printf("%s\n", str);
}