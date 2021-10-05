/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:50 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/05 16:55:10 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    ft_putstr_fd(char *str, int fd)
{
    int     i;

    i = 0;
    while (str[i] && str[i] != '\0')
        write(fd, &str[i++], 1);
}