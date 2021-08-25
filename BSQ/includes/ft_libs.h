#ifndef FT_LIBS_H
# define FT_LIBS_H "ft_libs.h"

#include <unistd.h>

extern	void	ft_putchar(char c);
extern	void	ft_putstr(char *str);
extern	char	*ft_strstr(char *str, char *to_find);
extern	int	ft_is_str_numeric(char *str);
extern	int	ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		i2;

	i = nb / 10;
	i2 = nb % 10;
	ft_putchar(i + 48);
	ft_putchar(i2 + 48);
}

void	ft_putstr(char *str)
{
	char	finalString;

	while (*str && *str != '\0')
	{
		finalString = *str;
		write(1, &finalString, 1);
		str++;
	}
}

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
	while (str[i] && str[i] != '\0')
		i++;
    return i;
}

int     ft_is_str_numeric(char *str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
        if (str[i] < 48 || str[i++] > 57)
            return (0);
    return (1);
}

int     ft_atoi(char *str)
{
    int i[2];

    i[0] = 0;
    i[1] = 1;

    if(*str == '-')
    {
        i[1] = -1;
        str++;
    }

    while ((*str >= '0') && (*str <= '9'))
    {
      i[0] = i[0] * 10;
      i[0] = i[0] + (*str - 48);
      str++;
    }
    return (i[1] * i[0]);
}
#endif
