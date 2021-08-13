#include <unistd.h>

void	ft_putstr(char *str);

void	*ft_strcpy(char *dest, const char *src);

int	main(void)
{
	char string1[120] = "BCDEF";
	char string2[120] = "";

	ft_putstr(string1);
	ft_putstr(string2);
	write(1, "\n", 1);
	ft_putstr(ft_strcpy(string2, string1));
	write(1, "\n", 1);
	ft_putstr(string1);
	write(1, "\n", 1);
	ft_putstr(string2);
	write(1, "\n", 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}
