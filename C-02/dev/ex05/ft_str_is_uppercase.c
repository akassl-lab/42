/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:26:35 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/12 21:10:29 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		result;

	result = 1;
	while (*str)
	{
		if (*str < 65 || *str > 90)
			result = 0;
		if (*str == '\0')
			result = 1;
		str++;
	}	
	return (result);
}
