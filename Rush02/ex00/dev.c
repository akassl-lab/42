#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "utils/utils.c"

#define MAX_BUFFER_SIZE 1096

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
                int i2 = i;
                while(buff[i2++] != '\n')
                {
                    if (buff[i2] != ':' && buff[i2] != ' ' && buff[i2] >= 97 && buff[i2] <= 122)
                    {
                        result[i3++] = (char)buff[i2]; 
                        write(1, &buff[i2], 1);
                    }
                }



                //printf("matched"); // We found the argument in the file
                break;

            }
            i++;
        }

        int testLoop = 0;
        while (result[testLoop] != '\0')
        {
            //printf("test\n");
            write(1, &result[testLoop], 1);
            testLoop++;
        } 

        free(buff);
    }
    return (0);
}