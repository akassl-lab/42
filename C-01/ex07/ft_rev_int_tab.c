#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);


int	main(void)
{
	int aka[2] = {12, 34};
	
	ft_rev_int_tab(aka, 2);
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	//int value;

	while (*tab++)
	{
		if (*tab < size)
		{
			tab[*tab];
			printf("testing");
	
		}
	}

	temp = tab[0];
	tab[0] = tab[1];
	tab[1] = temp;
	printf("\nTable 1: %d \nTable 2: %d", tab[0], tab[1]);
	//
}
