/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:04:21 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/17 16:06:21 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i[3];

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	while (to_find[i[1]] != '\0')
		i[1]++;
	while (str[i[0]] != '\0')
	{
		if (to_find[i[0]] == str[i[0]])
		{
			i[2]++;
			if (i[1] - 1 == i[2])
				return (str);
		}
		else
			return (str - i[0]);
		i[0]++;
	}
	return (str);
}
