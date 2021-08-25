/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:20:03 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/24 12:14:16 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

#include <fcntl.h>

#include <unistd.h>

#include "includes/libs.c"
#include "includes/checkSquare.c"


int main(int argsc, char **argv)
{
    if (argsc < 2) {
        ft_putstr(COLOR_RED "ERROR: " COLOR_RESET "Vous devez utiliser au minimum un argument"); return (0);
    }
    else if(argsc > 2) {
        ft_putstr(COLOR_RED "ERROR: " COLOR_RESET "Vous devez utiliser maximum un arguement"); return (0);
    }
    else
    {
        #define FILE_TO_OPEN argv[1]
    }


    #ifdef FILE_TO_OPEN
        // Let's create the buffer using the buffer size we defined and allocate an address
        char *buffer;
        int fileContent;
        
        buffer = malloc (sizeof(char*));
        fileContent = aka_readFile(buffer, FILE_TO_OPEN);

        globalX = calculateTotalLength(buffer, fileContent);
        globalY = calculateTotalLines(buffer, fileContent);


        if (aka_canCreateSquare(fileContent, buffer) == 1)
        {
            printf("%sSUCCESS:%s We were able to create a square using the file %s", COLOR_GREEN, COLOR_RESET, FILE_TO_OPEN);
        }
        else
        {
            printf("%sERROR:%s We were unable to create a square using the file %s", COLOR_RED, COLOR_RESET, FILE_TO_OPEN);
            aka_terminateProcess(buffer, 1);
        }

        free(buffer);


    #else
        printf("An error occured");
        return (0);
    #endif

    return (0);
}





/****************** DEV *********************/