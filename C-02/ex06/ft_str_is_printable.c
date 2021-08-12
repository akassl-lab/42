/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:26:35 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/12 17:40:57 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int		result;

	result = 1;
	while (*str)
	{
		if (*str < 9 || *str > 253)
			result = 0;
		if (*str == '\0')
			result = 1;
		str++;
	}	
	return (result);
}
