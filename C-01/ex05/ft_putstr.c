/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:29:17 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/09 12:29:25 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int		sizeOfString;
	char	finalString;

	while (*str && *str != '\0')
	{
		finalString = *str;
		write(1, &finalString, 1);
		str++;
	}
}
