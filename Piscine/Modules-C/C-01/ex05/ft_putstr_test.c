/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:06:25 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/09 12:06:49 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	ft_putstr("test");
	return (0);
}

void	ft_putstr(char *str)
{
	int		sizeOfString;
	char	finalString;

	while (*str && *str != '\0')
	{
		finalString = *str;
		write(1, &finalString, 1);
		str++;
	}
}
