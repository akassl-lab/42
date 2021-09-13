#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int		aka;
	int		*nbr;

	nbr = &aka;
	ft_ft(nbr);
	printf("%d", aka);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
