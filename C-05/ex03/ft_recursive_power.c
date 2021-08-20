#include <stdio.h>
#include <math.h>

int	globalLoop = 1;
int storedInitialValue = 0;
int storedCurrentValue = 1;

int ft_recursive_power(int nb, int power);

int main(void)
{
	printf("Value: %d\n", ft_recursive_power(0, 0));
	printf("Native Function: %f\n", pow(0, 0));
	return 0;
}

int ft_recursive_power(int nb, int power)
{
	int		i;

	i = 1;
	if (storedInitialValue == 0)
		storedInitialValue = nb;
	if (globalLoop <= power)
	{
		storedCurrentValue *= nb;
		globalLoop++;
		return ft_recursive_power(storedInitialValue, power);
	}
	if (storedCurrentValue == 0)
		return (1);
	return storedCurrentValue;
}
