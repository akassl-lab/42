/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:20:03 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/23 12:41:46 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/libs.c"

#ifndef DEV_MODE
    #define MAX_BUFFER_SIZE 3096
#else
    #define MAX_BUFFER_SIZE 1024
#endif


int main(int argsc, char **argv)
{
    if (argsc < 2) {
        ft_putstr("Vous devez utiliser au minimum un argument"); return (0);
    }


    printf("testing");
    return (0);
}
