#include <unistd.h>
#include "mapPoints.c"
extern int	aka_canCreateSquare(int fileContent, char *buffer);

int		checkElement(char *buffer, char *element)
{
	int	i[2];
	int	j;

	i[0] = 0;
    i[1] = 0;
	j = 0;
	while (buffer[i[0]] != '\n')
	{
		if (buffer[i[0]] >= '0' && buffer[i[0]] <= '9')
            i[1] = i[0];
		else
		{
			element[j] = buffer[i[0]];
			j++;
		}
		i[0]++;
	}
	return (1);
}

int aka_canCreateSquare(int fileContent, char *buffer)
{
	char		yx[globalY][globalX];
	char	element[3];
	int		i;
	int		x;
	int		y;

	checkElement(buffer, element);
	if (fileContent > 1)
    {
		i = 0;
		y = 0;
		x = 0;
		while (y < globalY)
		{
			x = 0;
			while (x < globalX)
				yx[y][x++] = ' ';
			y++;
		}
		i = 0;
		while(buffer[i] != '\n')
			i++;
		y = 0;
		x = 0;
		while (i <= fileContent)
		{
			if (buffer[i] == '\n')
			{
				y++;
				x = 0;
			}
			if (buffer[i] == element[0])
			{
				yx[y][x] = element[0];
				x++;
			}
			if (buffer[i] == element[1])
			{
				yx[y][x] = element[1];
				x++;
			}
			if (buffer[i] == element[2])
			{
				yx[y][x] = element[2];
				x++;
			}
			i++;
		}
		i = 0;
		y = 0;
		x = 0;
		mapPoints(yx, element);
		i = 0;
		y = 0;
		x = 0;
		while (y < globalY)
		{
			x = 0;
			while (x < globalX)
				write(1, &yx[y][x++], 1);
			write(1, "\n", 1);
			y++;
		}
        return (1);
    }
    return (0);
}
