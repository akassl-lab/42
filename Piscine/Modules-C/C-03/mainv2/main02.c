#include <stdio.h>
#include <string.h>
int	ft_strcat(char *dest, char *src);

int	main(void)
{
    char    dest[60] = "";
    char    src[60] = "b";
    char    dest2[60] = "";
    char    src2[60] = "b";


    ft_strcat(dest, src);
    printf("ft_strcat: %s\n", dest);
    strcat(dest2, src2);
	printf("strcat: %s\n", dest2);
}
