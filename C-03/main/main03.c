#include <stdio.h>
#include <string.h>

int	ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
    char    dest[60] = {'1','2','3','4'};
    char    src[] = {'5','6','7'};
    char    dest2[60] = {'1','2','3','4'};
    char    src2[] = {'5','6','7'};
    int i;
    
    i = 5;
    ft_strncat(dest, src, i);
    printf("%s\n", dest);
    strncat(dest2, src2, i);
    printf("%s\n", dest2);
}
