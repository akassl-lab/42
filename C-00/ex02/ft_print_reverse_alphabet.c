#include <stdio.h>

void ft_print_reverse_alphabet(void);

int main()
{
    ft_print_reverse_alphabet();
    return (0);
}


void ft_print_reverse_alphabet(void)
{
    char c = 0;
    for( c = 122; c > 96; --c )
    {
        printf("%c", c);
    }
}