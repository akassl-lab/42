#include <stdio.h>

void	ft_ultimate_ft_ex(int *****nbr);
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int		nbr;
	int		*ptr;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;	

	nbr = 0;
	ptr = &nbr;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ft_ultimate_ft_ex(&ptr4);
	printf("%d", nbr);
	return (0);
}

void	ft_ultimate_ft_ex(int *****nbr)
{
	int		*****ptr5;
	int		******ptr6;
	int		*******ptr7;
	int		********ptr8;

	ptr5 = nbr;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_ultimate_ft(&ptr8);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
