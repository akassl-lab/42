#include <stdio.h>
#include <math.h>

int ft_fibonacci(int index);

int main(void)
{
	printf("Our Function: %d\n", ft_fibonacci(13));
	return 0;
}


int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return index;
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
