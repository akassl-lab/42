#include <unistd.h>

void    ft_putstr(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char string1[120] = "ABCD";
	char string2[120] = "";

	ft_putstr(string1);
	ft_putstr(string2);
	write(1, "\n", 1);
	ft_putstr(ft_strncpy(string2, string1, 3));
	write(1, "\n", 1);
	ft_putstr(string1);
	write(1, "\n", 1);
	ft_putstr(string2);
	write(1, "\n", 1);
	return (0);
}


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	while(i < n) 
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

