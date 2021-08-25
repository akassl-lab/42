/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:20:03 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/25 15:45:41 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "includes/libs.h"
#include "includes/checkSquare.h"

void initiateMain(int argsc, char **argv, int totalArguFounds);

int main(int argsc, char **argv)
{
    if (argsc < 2) {
        ft_putstr(COLOR_RED "ERROR: " COLOR_RESET "Vous devez utiliser au minimum un argument"); return (0);
    }

    initiateMain(argsc, argv, 0);
    return (0);
}

void initiateMain(int argsc, char **argv, int totalArguFounds)
{
    while (totalArguFounds <= argsc-2)
    {
        #define FILE_TO_OPEN argv[totalArguFounds+1]
        #ifdef FILE_TO_OPEN
            char *buffer;
            int fileContent;

            buffer = malloc (sizeof(char*));
            fileContent = aka_readFile(buffer, FILE_TO_OPEN);
            if (fileContent != -1)
            {
                globalX = calculateTotalLength(buffer, fileContent);
                globalY = calculateTotalLines(buffer, fileContent);
                if (aka_canCreateSquare(fileContent, buffer) != 1)
                    printf("error couldnt create square");
            }
            free(buffer);
        #else
            printf("An error occured");
            return (0);
        #endif
        totalArguFounds++;
    }
}
