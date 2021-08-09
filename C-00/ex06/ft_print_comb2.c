#include <stdio.h>
#include <unistd.h>

void ft_print_int(int a);
void ft_print_nums(int a, int b);
void ft_print_comb(void);


int main()
{
    ft_print_comb();
    return (0);
}

void ft_print(int a)
{
    char *chiffre = "0123456789";
    write(1, chiffre + a, 1);
}

void ft_print_nums(int a, int b)
{
    ft_print(a), ft_print(b);
}

void ft_print_comb(void)
{
    int a = 0, b;
    
    while (a <= 9)
    {
        b = a + 1;
        while (b <= 9)
        {
            ft_print_nums(a, b);
            if( a != 10 || b != 10 )
            {
                write(1, ", ", 2);
            }
            b += 1;
        }
        a += 1;
    }
}
