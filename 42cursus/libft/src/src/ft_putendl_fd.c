/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:45 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:14:22 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int		i;

	i = 0;
	if (str && fd)
	{
		while (str[i] && str[i] != '\0')
			write(fd, &str[i++], 1);
		ft_putchar_fd('\n', fd);
	}
}
