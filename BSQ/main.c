/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:20:03 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/23 14:13:13 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include <fcntl.h>

#include <sys/wait.h>

#include "includes/libs.c"

void    terminateProcess(char *buffer, unsigned int flag);

#ifdef DEV_MODE
    #define MAX_BUFFER_SIZE     3096
    #define TERMINATE_WAIT      5
#else
    #define MAX_BUFFER_SIZE     1024
    #define TERMINATE_WAIT      5
#endif


int main(int argsc, char **argv)
{
    if (argsc < 2) {
        ft_putstr("Vous devez utiliser au minimum un argument"); return (0);
    }
    else if(argsc > 2) {
        ft_putstr("Vous devez maximum un arguement"); return (0);
    }
    else
        #define FILE_TO_OPEN argv[1]


    #ifdef FILE_TO_OPEN
        printf("File we are using %s\n", FILE_TO_OPEN);

        // Let's create the buffer using the buffer size we defined and allocate an address
        // To open the file

        char *buffer = (char*) malloc (MAX_BUFFER_SIZE);

        int file = open(FILE_TO_OPEN, O_RDONLY);

        if (file == -1) {
            // Put flag to 1 to ignore buffer since we did not use it yet so we need to be able to pass our condition even if the buffer is free
            // But we still need to free the allocated address that we requested
            terminateProcess(buffer, 1);
        }
    #else
        printf("An error occured");
        return (0);
    #endif

    return (0);
}

// Flag 0 = Using the buffer or flag 1 = Ignore the buffer
void    terminateProcess(char *buffer, unsigned int flag)
{
    if(*buffer || flag == 1)
    {
        free(buffer); // Free the allocated address
        #undef FILE_TO_OPEN // Undef our FILE_TO_OPEN
        printf("Terminating process in %d second(s)", TERMINATE_WAIT); // Give it a small delai to let the buffer free completely
        exit(TERMINATE_WAIT); // Terminate the process
    }
    else
        printf("Could not terminate process, the buffer was invalid");
}
