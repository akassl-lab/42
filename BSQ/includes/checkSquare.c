#include <unistd.h>

extern int	aka_canCreateSquare(int fileContent, char *buffer);

int aka_canCreateSquare(int fileContent, char *buffer)
{
    if (fileContent > 1)
    {
		int		i;

		i = 0;

		while (i <= fileContent)
		{
			write(1, &buffer[i], 1);
			i++;
		}

        return (1);
    }
    return (0);
}



