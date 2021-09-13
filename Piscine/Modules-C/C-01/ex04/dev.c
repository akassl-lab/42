#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int		 a_aka;
	int 	b_aka;
	int		*a;
	int 	*b;

	a_aka = 10;
	b_aka = 2;
	a = &a_aka;
	b = &b_aka;
	ft_ultimate_div_mod(a, b);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}
