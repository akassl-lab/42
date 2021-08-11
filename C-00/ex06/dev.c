#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb2(void);


int main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int 	a[2];

	a[0] = 0;
	a[1] = 0;
	while (a[0] < 100)
	{
		a[1] = a[0] + 1;
		while (a[1] < 100)
		{
			ft_putchar(a[0] / 10 + '0');
			ft_putchar(a[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(a[1] / 10 + '0');
			ft_putchar(a[1] % 10 + '0');
			if ((a[0] / 10 != 9) || (a[0] % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			a[1]++;
		}
		a[0]++;
	}
	ft_putchar('\n');
}
