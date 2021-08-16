/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:38:15 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/16 11:51:14 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		count;
	int		i;

	count = 1;
	i = 0;
	while (str[i])
	{		
		if (str[i] > 'A' || str[i] < 'Z' || str[i] > 'a' || str[i] < 'z')
			count = 0;
		if (str[i] == '\0')
			count = 1;
		i++;
	}
	return (count);
}
