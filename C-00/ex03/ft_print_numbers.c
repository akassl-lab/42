#include <stdio.h>

void ft_print_numbers(void);

int main()
{
    ft_print_numbers();
    return (0);
}

void ft_print_numbers(void)
{
    int i = 0;
    for ( i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
}