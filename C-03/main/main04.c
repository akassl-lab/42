#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[60] = {'a','b','c','d','e','f','g','h'};
	char	to_find[10] = {'a','i'};
	char	*retour = ft_strstr(str, to_find);

	printf("%s\n", retour);
}
