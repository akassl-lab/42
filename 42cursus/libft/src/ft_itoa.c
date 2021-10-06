/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:29 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/06 14:03:16 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlength(int n)
{
	if(!n) return (1);
	int i;
	
	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
  	return i;
}

static int 	int_to_ascii(int n)
{	
	int		i;
	
	i = 0;
	if (n < 0) 
		return (45);
	while (i < 10)
	{
		if (i == n)
			return (n + 48);
		i++;
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		storeData[2];
	int		length[2];
	
	length[0] = ft_intlength(n);
	length[1] = 0;
	storeData[0] = n;
	storeData[1] = 0;
	
	ptr = ft_calloc(length[0]+1, sizeof(char *));
	
	if (ptr == NULL)
		return(NULL);
	while (length[0] > 0)
	{
		if (length[0] == ft_intlength(n))
			storeData[1] = storeData[0] % 10;
		else
		{
			storeData[1] = storeData[0] /= 10;
			storeData[1] = storeData[1] % 10;
		}
		if (storeData[1] < 0 && length[0] != 1) 
			storeData[1] -= (storeData[1] + storeData[1]);
			
		if(int_to_ascii(storeData[1]) == 45)
		{
			ptr[length[1]++] = int_to_ascii(storeData[1] -= (storeData[1] + storeData[1]));
			ptr[length[1]] = 45;
		}
		else
			ptr[length[1]] = int_to_ascii(storeData[1]);
		length[0]--;
		length[1]++;
	}
	
	ptr[length[1]] = '\0';
	return (ft_strrev(ptr));
}