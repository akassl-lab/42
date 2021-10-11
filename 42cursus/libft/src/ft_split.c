/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:55 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/11 09:50:10 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	calculate_strings(char const *s, char c)
{	
	unsigned int	i[2];

	if (!s[0])
		return (0);
	i[0] = 0;
	i[1] = 0;
	while (s[i[0]] && s[i[0]] == c)
		i[0]++;
	while (s[i[0]])
	{
		if (s[i[0]] == c)
		{
			i[1]++;
			while (s[i[0]] && s[i[0]] == c)
				i[0]++;
			continue;
		}
		i[0]++;
	}
	if (s[i[0] - 1] != c)
		i[1]++;
	return (i[1]);
}

static void			next_string(char **s, unsigned int *n,
					char c)
{
	unsigned int i;

	*s += *n;
	*n = 0;
	i = 0;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[i])
	{
		if ((*s)[i] == c)
			return;
		(*n)++;
		i++;
	}
}

static char			**free_ptr(char **ptr)
{	
	while(*ptr)
		free(*ptr++);
	free(ptr);
	return (NULL);
}

/* i table (i0 = loop || i1 = total strs|| i2 = str length) || i3 malloc error */
char	**ft_split(char const *s, char c)
{
	char	**return_ptr;
	char	*next_ptr;
	unsigned int	i[3];
	
	if (!s)
		return (NULL);
	i[1] = calculate_strings(s, c);
	if (!(return_ptr = ft_calloc(i[1] + 1, sizeof(char **))))
		return (NULL);
	i[0] = 0;
	next_ptr = (char *) s;
	i[2] = 0;
	while (i[0] < i[1])
	{
		next_string(&next_ptr, &i[2], c);
		if (!(return_ptr[i[0]] = ft_calloc(i[2] + 1, sizeof((char) + (unsigned int) i[2]))))
			return (free_ptr(return_ptr));
		ft_strlcpy(return_ptr[i[0]], next_ptr, i[2] + 1);
		i[0]++;
	}
	return_ptr[i[0]] = NULL;
	return (return_ptr);
}
