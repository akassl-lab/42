#include <unistd.h>

void ft_putnbr(int nb);
void ft_print(char c);

int main()
{
	ft_putnbr(42);
	return (0);
}

void ft_print(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int i = nb / 10, i2 = nb % 10;
	ft_print(i + 48), ft_print(i2 + 48);
}
