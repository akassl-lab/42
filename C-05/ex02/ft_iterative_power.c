#include <stdio.h>

int ft_iterative_power(int nb, int power);


int main(void)
{
	printf("Value: %d", ft_iterative_power(0, 0));
	return 0;
}

int ft_iterative_power(int nb, int power)
{
	int 	i;
	int 	result;

	i = 1;
	result = nb;
	while(i <= power)
	{
		printf("a\n");
		result *= nb;
		i++;
	}

	if (result == 0)
		return (1);
	return result;
}
