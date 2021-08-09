#include <stdio.h>

void ft_print_alphabet(void);

int main()
{
    ft_print_alphabet();
    return (0);
}


void ft_print_alphabet(void)
{
    char c = 0;
    for( c = 97; c < 123; c++ )
    {
        printf("%c", c);
    }
}