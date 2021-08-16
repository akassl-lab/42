/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:26:35 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/16 11:48:06 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		result;
	int		i;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			result = 0;
		if (str[i] == '\0')
			result = 1;
		i++;
	}	
	return (result);
}
