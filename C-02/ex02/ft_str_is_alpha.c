/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:38:15 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/12 17:17:54 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		count;

	count = 1;
	while (*str)
	{		
		if (*str > 122 || *str < 97)
			count = 0;
		if (*str == '\0')
			count = 1;
		str++;
	}
	return (count);
}
