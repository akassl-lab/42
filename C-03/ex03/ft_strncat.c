/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:55:33 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/19 15:50:11 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i[2];

	i[0] = 0;
	i[1] = 0;
	while (dest[i[0]] != '\0')
	{
		i[0]++;
	}
	while (src[i[1]] != '\0' && i[1] <= nb)
	{
		dest[i[0] + i[1]] = src[i[1]];
		i[1]++;
	}
	dest[i[0] + i[1]] = '\0';
	return (dest);
}
