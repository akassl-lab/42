/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:51:53 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/12 21:10:10 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		count;

	count = 1;
	while (*str)
	{		
		if (*str < 48 || *str > 57)
			count = 0;
		if (*str == '\0')
			count = 1;
		str++;
	}
	return (count);
}
