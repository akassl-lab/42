/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:00:37 by nmallett          #+#    #+#             */
/*   Updated: 2021/09/15 15:43:21 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft.h"
#include <stdio.h>

int main(void)
{
    char    string1[126] = "____&* 23 $__ _ _(og gk)__L.S^_$";
    char    removeFromString[50] = "L_$.^ 2&3*S";
    char*   target = ft_strtrim(string1, removeFromString);
    printf("%s\n", target);

    free(target);
    return (0);
}