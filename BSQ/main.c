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

#include <sys/wait.h>

#include <unistd.h>

#include "includes/libs.c"
#include "includes/checkSquare.c"

void    aka_terminateProcess(char *buffer, unsigned int flag);
int     aka_readFile(char *buffer, char *file);
//int     aka_canCreateSquare(int fileContent, char *buffer);
/***** DEV *****/
int aka_canCreateSquare2(int fileContent, char *buffer);

#ifdef DEV_MODE
    #define MAX_BUFFER_SIZE     509600
    #define TERMINATE_WAIT      1
    #define FILE_SIZE           6000
#else
    #define MAX_BUFFER_SIZE     1024
    #define TERMINATE_WAIT      5
    #define FILE_SIZE           252
#endif


int main(int argsc, char **argv)
{
    if (argsc < 2) {
        ft_putstr(COLOR_RED "ERROR: " COLOR_RESET "Vous devez utiliser au minimum un argument"); return (0);
    }
    else if(argsc > 2) {
        ft_putstr(COLOR_RED "ERROR: " COLOR_RESET "Vous devez utiliser maximum un arguement"); return (0);
    }
    else
        #define FILE_TO_OPEN argv[1]


    #ifdef FILE_TO_OPEN
        printf("File we are using %s\n", FILE_TO_OPEN);

        // Let's create the buffer using the buffer size we defined and allocate an address
        char *buffer = (char*) malloc (MAX_BUFFER_SIZE);

        int fileContent = aka_readFile(buffer, FILE_TO_OPEN);

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

    int fileOutput = read(fileEx, buffer, FILE_SIZE);
    printf("%sSUCCESS:%s Opening file %s\n", COLOR_GREEN, COLOR_RESET, file);
    return (fileOutput);
}






/****************** DEV *********************/

int aka_canCreateSquare2(int fileContent, char *buffer)
{
    if (fileContent > 1)
    {
		int		i;
        int     i2;
        char *buffer2 = (char*) malloc (MAX_BUFFER_SIZE);

		i = 0;
        i2 = 0;

        buffer2 = buffer;

        printf("ORIGINAL SQUARE\n\n");
		while (i <= fileContent)
		{
			write(1, &buffer[i], 1);
			i++;
		}

        printf("\n\nOUR SQUARE\n\n");



        int countLineLength = 0;
        int countTotalLines = 0;


		while (i2 <= fileContent)
		{
            // Calculate the total lines in the file
            if(buffer2[i2] == '\n')
                countTotalLines++;

            // Calculate the total characters in one line
            if (buffer2[i+12] == '\n' && countTotalLines == 0)
                countLineLength = i2+1;

			write(1, &buffer2[i2], 1);
			i2++;
		}

        printf("\n\n");

        printf(COLOR_GREEN "Total length of each line: %d\n" COLOR_RESET, countLineLength);
        printf(COLOR_GREEN "Total lines in square: %d\n" COLOR_RESET, countTotalLines);

        int x = countLineLength;
        int y = countTotalLines;

        // Let's try to re-create a normal square ourselves using X as a symbol

        int i3 = 0;
        int newLine = 0;

        printf("\n\nNEW SQUARE\n\n");

        while (i3 <= x && newLine != y)
        {

            if ( i3 == x)
            {
                printf("\n");
                newLine++;
                i3 = 0;
            }
            else
            {
                printf("X");
                i3++;
            }
        }

        return (1);
    }
    return (0);
}
