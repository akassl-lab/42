#include <stdio.h>

int	mapPoints(char yx[10][25], char *buffer)
{
	int		i;
	int		x;
	int		y;
	int		points;

	i = 0;
	y = 0;
	x = 0;


		x = 0;
		while (y < 9)
		{
			points = 0;
			while (yx[y][x] != buffer[2] && yx[y][x + i] != buffer[2] && yx[y + i][x] != buffer[2] && yx[y + i][x + i] != buffer[2])
			{
				i++;
				points++;
			}
			printf("yx[%d][%d] as %d points\n", y, x, points);
			y++;
		}

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
	return (1);
}
