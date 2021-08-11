#include <stdio.h>
#include <unistd.h>

void ft_print_int(int a);
void ft_print_nums(int a, int b, int c);
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

void ft_print_nums(int a, int b, int c)
{
    ft_print(a), ft_print(b), ft_print(c);
}

void ft_print_comb(void)
{
    int a = 0, c, b;
    
    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while( c <= 9)
            {
                ft_print_nums(a, b, c);
                if( a != 7 || b != 8 || c != 9 )
                {
                    write(1, ", ", 2);
                }
                c += 1;
            }
            b += 1;
        }
        a += 1;
    }
}