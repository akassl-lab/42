/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:13:18 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/21 13:46:30 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "utils/utils.c"

#define MAX_BUFFER_SIZE 1096

//char fetchedValue[];

int main(int argc, char **argv)
{

    if (argc < 2)
    {
        ft_putchar("Vous devez entrer au minimum un argument\n");
        return 0;
    }
    if (argc > 3)
    {
        ft_putchar("Vous devez entrer maximum deux argument\n");
        return 0;
    }
    if (ft_isdigit(argv[1]) == 0)
    {
        ft_putchar("Vous pouvez seulement entrer des chiffres et nombres\n");
        return 0;
    }
    else
    {

		/* Testing Part */

        /*
		
		int iEx[2] = {0, ft_atoi(argv[1])};
		int iLoop = 0;

		char table[][256]  = { 
			"twenty",
			"thirty",
			"forty",
			"fifty",
			"sixty",
			"seventy",
			"eighty",
			"ninety",
	   	};
        */


        char *buff = (char*) malloc (MAX_BUFFER_SIZE);
        int file = open("utils/numbers.dict", O_RDONLY);

        if (file == -1)
        {
            ft_putchar("File does not exist");
            return 0;   
        }

        int iLoop = 0;

        while (argv[1][iLoop] != '\0' && argv[1][iLoop] >= 48 && argv[1][iLoop] <= 57 )
			iLoop++;


        int textSize = read(file, buff, 730); //TODO: Find a way to get the size of the file

        int i = 0;
        char result[] = "";

        //printf("iLoop Value: %d", iLoop);


        int storedValue[iLoop];
        int iLoop2 = iLoop; // Store initial iLoop as a const to not make it modifidable

        while (i < textSize)
        {           
            // Check if the length is XX or more (EX: 20 and not 2) - todo:

            int iLoop3[2]; // iLoop 3 = the loop to get the length of the loop
            
            iLoop3[0] = iLoop;
            iLoop3[1] = 0;
            while (iLoop3[0] > 0)
            {
                iLoop3[1]++; // Store the amount of loops in the loop
                iLoop3[0]--;
            }

            if (iLoop == 3)    
            {    
                int temp = 0;
                while (temp <= iLoop2)
                {
                    iLoop2--;
                    storedValue[temp] = ft_split2numbers(iLoop2, ft_atoi(argv[1]));
                    //printf("%d\n", storedValue[temp]);
                    if (iLoop2 == 0)
                        break;
                    temp++;
                }

                if (storedValue[0] == 1 && iLoop == 2)
                {

                    printf("We have a number between 10 and 19");

                }
                else if (storedValue[0] == 1 && iLoop == 3)
                {

                    printf("We have a number between 100 and 199");

                }
                else
                {
                    printf("Found other number than 10-19");
                }



                //printf("iloop at 2");
                return 0;
            }
            else if(ft_atoi(argv[1]) == ft_atoi(&buff[i])) // If the argument is a single digit (DONE: 0-10)
            {
                int i2 = i;
				int i3 = 1;

				//i2 = 0;
                while(buff[i2++] != '\n')
                {
                    if (buff[i2] != ':' && buff[i2] != ' ' && buff[i2] >= 97 && buff[i2] <= 122)
					{
                        result[(i3++)] = (char)buff[i2]; 
					}
                }



                //printf("matched"); // We found the argument in the file
                break;

            }
            i++;
        }

        free(buff);

        int testLoop = 1;
        while (result[testLoop] != '\0')
        {
            write(1, &result[testLoop], 1);
            testLoop++;
        } 

        write(1, "\n", 1);

    }

    return (0);
}

// result[i3++] = (char)buff[i2]; 