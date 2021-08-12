/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:18:35 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/12 17:25:31 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int		result;

	result = 1;
	while (*str)
	{
		if (*str < 97 || *str > 122)
			result = 0;
		if (*str == '\0')
			result = 1;
		str++;
	}	
	return (result);
}
