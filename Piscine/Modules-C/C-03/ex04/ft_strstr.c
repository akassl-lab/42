/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:04:21 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/19 12:31:49 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		istr;
	int		ito_find;

	istr = 0;
	ito_find = 0;
	while (str[istr] != '\0')
	{
		ito_find = 0;
		while (to_find[ito_find] == str[istr])
		{
			return ((str - (ito_find - istr)));
			ito_find++;
		}
		istr++;
	}	
	return (0);
}
