#include <stdio.h>

int ft_recursive_factorial(int nb);
int storeValue[3];

int main(void)
{
	storeValue[0] = 1; // Fake Loop we are creating
	storeValue[1] = 1; // Value that we will be returning
	storeValue[2] = -1; // The initial value that passed thru the fonctuin
	printf("Value: %d", ft_recursive_factorial(5));
	return 0;
}


int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (storeValue[2] == -1 && storeValue[0] == 1)
		storeValue[2] = nb;
	if (storeValue[0] <= storeValue[2])
	{		storeValue[1] *= storeValue[0];
		storeValue[0]++;
		return (ft_recursive_factorial(storeValue[2]));
	}
	return (storeValue[1]);
}
