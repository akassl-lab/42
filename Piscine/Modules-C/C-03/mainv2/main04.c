#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[] = "abcbaauaaabcd";
    char to_find[] = "d";
    printf("Ma Fonction      >> %s\n", ft_strstr(str, to_find));
    printf("Fonction de Base >> %s\n", strstr(str, to_find));
}
