/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:20:03 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/23 16:21:03 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include <fcntl.h>

#include <sys/wait.h>

#include <unistd.h>

#include "includes/libs.c"
#include "includes/checkSquare.c"

void    aka_terminateProcess(char *buffer, unsigned int flag);
int     aka_readFile(char *buffer, char *file);
//int     aka_canCreateSquare(int fileContent, char *buffer);

#ifdef DEV_MODE
    #define MAX_BUFFER_SIZE     3096
    #define TERMINATE_WAIT      1
#else
    #define MAX_BUFFER_SIZE     1024
    #define TERMINATE_WAIT      5
#endif


int main(int argsc, char **argv)
{
    if (argsc < 2) {
        ft_putstr("ERROR: Vous devez utiliser au minimum un argument"); return (0);
    }
    else if(argsc > 2) {
        ft_putstr("ERROR: Vous devez utiliser maximum un arguement"); return (0);
    }
    else
        #define FILE_TO_OPEN argv[1]


    #ifdef FILE_TO_OPEN
        printf("File we are using %s\n", FILE_TO_OPEN);

        // Let's create the buffer using the buffer size we defined and allocate an address
        char *buffer = (char*) malloc (MAX_BUFFER_SIZE);

        int fileContent = aka_readFile(buffer, FILE_TO_OPEN);

        if (aka_canCreateSquare(fileContent, buffer) == 1)
            printf("%sERROR:%s We were able to create a square using the file %s", COLOR_RED, COLOR_RESET, FILE_TO_OPEN);
        else
            printf("%sERROR:%s We were unable to create a square using the file %s", COLOR_RED, COLOR_RESET, FILE_TO_OPEN);


        free(buffer);


    #else
        printf("An error occured");
        return (0);
    #endif

    return (0);
}

// Flag 0 = Using the buffer or flag 1 = Ignore the buffer
void    aka_terminateProcess(char *buffer, unsigned int flag)
{
    if(*buffer || flag == 1)
    {
        free(buffer); // Free the allocated address
        #undef FILE_TO_OPEN // Undef our FILE_TO_OPEN
        printf("%sTerminating process in %d second(s)%s", COLOR_RED, TERMINATE_WAIT, COLOR_RESET); // Give it a small delai to let the buffer free completely
        exit(TERMINATE_WAIT); // Terminate the process
    }
    else
        printf("%sERROR:%s Could not terminate process, the buffer was invalid", COLOR_RED, COLOR_RESET);
}

int    aka_readFile(char *buffer, char *file)
{
    int fileEx = open(file, O_RDONLY);

    if (fileEx == -1) {
        // Put flag to 1 to ignore buffer since we did not use it yet so we need to be able to pass our condition even if the buffer is free
        // But we still need to free the allocated address that we requested
        printf("%sERROR:%s This file does not exist\n", COLOR_RED, COLOR_RESET);
        aka_terminateProcess(buffer, 1);
        return (0);
    }
    int fileOutput = read(fileEx, buffer, 4000);
    printf("SUCCESS: Opening file %s\n", file);
    return (fileOutput);
}


