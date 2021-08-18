#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	str[10] = "Hello";
	char	str1[10] = "bonjourha";
	ft_strcpy(str1, str);
	printf("%s\n", str1);
	printf("%s\n", str);
}
