/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:38:15 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/18 13:42:46 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i] && str[i] != '\0')
	{		
		if (str[i] >= 'A' || str[i] <= 'Z' || str[i] >= 'a' || str[i] <= 'z')
			count = 1;
		i++;
	}
	return (count);
}
