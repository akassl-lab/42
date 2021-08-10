#include <stdio.h>

void	checkFirstLine(int currentHeight, int aka_y)
{
	if (currentHeight == 1 || currentHeight == aka_y)
	{
		printf("o");
	}
	else
	{
		printf("|");
	}
}

void	checkLastLine(int currentHeight, int aka_y)
{
	if (currentHeight == 1 || currentHeight == aka_y)
	{
		printf("o");
	}
	else
	{
		printf("|");
	}
	printf("\n");
}


void 	rush(int x, int y)
{
	int currentLength = 1;
	int currentHeight = 1;
	

	while (currentLength <= x && currentHeight <= y)
	{
		if (currentLength == 1) // Manage the first length
		{
			checkFirstLine(currentHeight, y);
			currentLength++;
		}
		else if (currentLength == x) // Manage the last length
		{
			checkLastLine(currentHeight, y);
			currentHeight++;
			currentLength = 1;
		}
		else 
		{
	
			if (currentHeight == 1)
			{
				printf("-");
			}
			else if (currentHeight == y)
			{
				printf("-");
			}
			else
			{
				printf(" ");
			}
			currentLength++;
		
		}	
	}

	printf("\n\n\nValue From Main X: %d - Value Y: %d", x, y);

}
