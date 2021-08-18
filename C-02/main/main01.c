#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[10] = "Allo";
	char	dest[7];
	int		n;

	n = 7;
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}
