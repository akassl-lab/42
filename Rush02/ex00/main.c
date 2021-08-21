/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:13:18 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/21 13:01:24 by nmallett         ###   ########.fr       */
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
		
		int iEx[2] = {0, ft_atoi(argv[1])};
		int iLoop = 0;

	
		while (argv[1][iLoop] != '\0' && argv[1][iLoop] >= 48 && argv[1][iLoop] <= 57 )
			iLoop++;



		while (iLoop >= 0)
		{
			iLoop--;
			printf("%d\n", ft_split2numbers(iLoop, ft_atoi(argv[1])));
			if (iLoop == 0)
				break;
		}
		



		/*
		while (iEx <= ft_atoi(argv[iEx]))
		{
			//printf("%d\n", ft_split2numbers(1, ft_atoi(argv[iEx])));
			iEx++;
		}
*/
		return 0;
		

        char *buff = (char*) malloc (MAX_BUFFER_SIZE);
        int file = open("utils/numbers.dict", O_RDONLY);

        if (file == -1)
        {
            ft_putchar("File does not exist");
            return 0;   
        }

        int textSize = read(file, buff, 730); //TODO: Find a way to get the size of the file

        int i = 0;


        while (i < textSize)
        {           
            if(ft_atoi(argv[1]) == ft_atoi(&buff[i]))
            {
                int i2;
				
				i2 = 0;
                while(buff[i2++] != '\n')
                {
                    if (buff[i2] != ':' && buff[i2] != ' ' && buff[i2] >= 97 && buff[i2] <= 122)
					{
						write(1, &buff[i2], 1);
					}
                }



                //printf("matched"); // We found the argument in the file
                break;

            }
            i++;
        }

        free(buff);

   
    }

    return (0);
}
