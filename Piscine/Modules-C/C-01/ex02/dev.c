#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int 	aka_a;
	int		aka_b;
	int		*a;
	int		*b;

	a = &aka_a;
	b = &aka_b;
	
	ft_swap(a, b);
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int 	aka;

	aka = *a;
	*a = *b;
	*b = aka;
}
