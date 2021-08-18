#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[60] = "akassl";
	char	to_find[10] = "aka";
	char	*retour = ft_strstr(str, to_find);

	printf("%s\n", retour);
}
