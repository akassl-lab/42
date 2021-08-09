#include <stdio.h>

void ft_is_negative(int n);

int main()
{
    ft_is_negative(-1);
    return (0);
}

void ft_is_negative(int n)
{
    char array[2] = {'N', 'P'};
    if ( n < 0 )
    {
        printf("%c", array[0]);
    }
    else if ( n > 0 )
    {
        printf("%c", array[1]);
    }
}