#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int nb);

int	main(void)
{
	char	*s1;
	char	*s2;
	int	i;

    s1 = "";
	s2 = "o";
    i = ft_strncmp(s1, s2, 2);
    printf("ft_strncmp %d\n\n", i);
    i = strncmp(s1, s2, 2);
    printf("strncmp %d\n", i);
    i = ft_strncmp(s1, s2, 3);
    printf("ft_strncmp %d\n\n", i);
    i = strncmp(s1, s2, 3);
    printf("strncmp %d\n", i);
    i = ft_strncmp(s1, s2, 4);
    printf("ft_strncmp %d\n\n", i);
    i = strncmp(s1, s2, 4);
    printf("strncmp %d\n", i);
}
