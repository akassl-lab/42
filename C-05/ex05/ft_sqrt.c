#include <stdio.h>
#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	printf("%d\n", ft_sqrt(8));
	return 0;
}

int ft_sqrt(int nb)
{
	int result;

	result = nb % 10;
	result = nb / result;
	return result;
}
