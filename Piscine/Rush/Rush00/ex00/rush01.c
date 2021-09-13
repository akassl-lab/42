#include <stdio.h>

void rush(int x, int y)
{
	// To test we will just addition both vars and print the result
	int a, b;
	a = x;
	b = y;

	int currentHeight;
	int currentLength;
	currentHeight = 1;
	currentLength = 1;

	int loop = x + 2;
	printf("My Loop: %d\n\n", loop);
	
	//printf("Value X: %d - Value Y: %d", a, b);
	
	//printf("testing");	
	// Create while loop to start generating the rectangle
	while (currentLength < loop)
	{
		if (currentHeight >= 1 && currentLength < x)
		{



			if (x >= currentLength)
			{	
				if (currentLength > 1)
				{
					printf("-");
					currentLength++;
				}
			}
			if (currentLength == 1 || currentLength == x)
			{
				printf("o");
				printf("currentLength: %d\n", currentLength);
				printf("currentX: %d\n", x);
				if (currentLength == x)
				{
					printf("2nd called?");
				}
				else if (currentLength == 1)
				{
					printf("o");
					printf("1st called");
					currentLength++;
				}
			}		
		}



/*


		// Dont forget to break somewhere or it will continue to loop
		if (currentHeight < y && currentLength < x)
		{
			if (currentLength > 1 && currentLength < x)
			{
				printf("o");
				currentLength++;
			}
			else if (currentHeight == 1 || currentHeight == y)
			{
				//printf("|");
				//currentLength++;
			}
			else if (currentLength < x)
			{
				printf("--");
				currentLength++;
			}
		}
		else if (currentLength == x && currentHeight < y)
		{
			printf("\n");
			currentLength = 1;
			currentHeight++;
		}
		*/
	}
	

	//printf("testing\n");
	//printf("%d", final);
}
