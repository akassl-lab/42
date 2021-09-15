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
#include <string.h>

int main(void)
{
    // Leave it void as we are still testing stuff

    char    string1[126] = "abcd";
    char    removeFromString[50] = "abc";
    char*   target = ft_strtrim(string1, removeFromString);

    printf("%s\n", target);

    free(target);
    return (0);
}