/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:23:28 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/25 20:23:30 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBS_H
# define FT_LIBS_H "ft_libs.h"

# include <unistd.h>

extern	void	ft_putchar(char c);
extern	void	ft_putstr(char *str);
extern	int	ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int	ft_atoi(char *str)
{
	int		i[2];

	i[0] = 0;
	i[1] = 1;
	if (*str == '-')
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
