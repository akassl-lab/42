#include <stdio.h>
#include <string.h>
int	ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[60] = {'1','2','3','4'};
	char	src[10] = {'5','6','7','8','9','0'};
    char    dest2[60] = {'1','2','3','4'};
    char    src2[10] = {'5','6','7','8','9','0'};

    ft_strcat(dest, src);
    printf("%s\n", dest);
    strcat(dest2, src2);
	printf("%s\n", dest2);
}
