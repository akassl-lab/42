#include <unistd.h>
#include <stdio.h>


void 	ft_putstr(char *str);

int main(int argc, char **argsv)
{

	int		i;

	i = 1;
	while (argsv[i])
	{
		ft_putstr(argsv[i]);
		ft_putstr("\n");
		i++;
	}
	return 0;
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}






