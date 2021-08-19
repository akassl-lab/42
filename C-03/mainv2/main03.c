#include <stdio.h>
#include <string.h>

int    ft_strncat(char *dest, char *src, unsigned int nb);

int    main(void)
{
    char    dest[60] = "1234";
    char    src[60] = "5678";
    char    dest2[60] = "1234";
    char    src2[60] = "5678";
    int i;
    
    i = 3;
    ft_strncat(dest, src, i);
    printf("%s\n", dest);
    strncat(dest2, src2, i);
    printf("%s\n", dest2);
}
