/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:50:46 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/09 12:51:11 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strlen(char *str);

int	main(void)
{
	return (0);
}

void	ft_strlen(char *str)
{
	while (*str && *str != '\0')
		++str;
}
