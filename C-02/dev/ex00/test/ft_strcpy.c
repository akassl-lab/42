/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:45:58 by bdion             #+#    #+#             */
/*   Updated: 2021/08/11 19:08:53 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src);

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i]) 
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
