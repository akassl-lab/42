#include <unistd.h>
#include "mapPoints.c"
extern int	aka_canCreateSquare(int fileContent, char *buffer);

int aka_canCreateSquare(int fileContent, char *buffer)
{
	char		yx[33][33];
	int		i;
	int		x;
	int		y;

	if (fileContent > 1)
    {
		i = 0;
		y = 0;
		x = 0;
		while (y < 9)
		{
			x = 0;
			while (x < 27)
				yx[y][x++] = ' ';
			y++;
		}
		i = 5;
		y = 0;
		x = 0;
		while (i <= fileContent)
		{
			if (buffer[i] == buffer[4])
			{
				y++;
				x = 0;
			}
			if (buffer[i] == buffer[1])
			{
				yx[y][x] = buffer[1];
				x++;
			}
			if (buffer[i] == buffer[2])
			{
				yx[y][x] = buffer[2];
				x++;
			}
			if (buffer[i] == buffer[3])
			{
				yx[y][x] = buffer[3];
				x++;
			}
			i++;
		}
		i = 0;
		y = 0;
		x = 0;
		while (y < 9)
		{
			x = 0;
			while (x < 27)
				write(1, &yx[y][x++], 1);
			write(1, "\n", 1);
			y++;
		}
		mapPoints(yx, buffer);
		i = 0;
		y = 0;
		x = 0;
		while (y < 9)
		{
			x = 0;
			while (x < 27)
				write(1, &yx[y][x++], 1);
			write(1, "\n", 1);
			y++;
		}
        return (1);
    }
    return (0);
}

