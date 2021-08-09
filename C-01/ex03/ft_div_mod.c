#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int 	result_a;
	int		result_b;
	int		*div;
	int		*mod;

	div = &result_a;
	mod = &result_b;


	ft_div_mod(8, 4, div, mod);

	printf("%d\n%d", result_a, result_b);
	return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
