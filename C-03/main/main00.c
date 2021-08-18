#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;
	int	i;

	s1 = "abcdef";
	s2 = "abcdef";
    i = ft_strcmp(s1, s2);
    printf("ft_strcmp: %d\n\n", i);
    i = strcmp(s1, s2);
    printf("strcmp: %d\n", i);
}
