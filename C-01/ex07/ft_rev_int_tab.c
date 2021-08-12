#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void 	ft_rev_int_tab2(int *tab, int size);


int	main(void)
{
	int aka[] = {1, 2, 3};
	
	ft_rev_int_tab2(aka, 3);
	return (0);
}

void	ft_rev_int_tab2(int *tab, int size)
{
	int i = 0;
	int temp;
	int aka = size;

	while( i < (size))
	{
		//printf("DEBUG CURRENT FETCH ARRAY: %d\n\n", i);

		//printf("DEBUG CURRENT TAB VALUE: %d - TABLE: %d\n\n",  tab[i], i);
		
		temp = tab[i];

	//	printf("FETCHING TAB: %d - Current Value: %d\n\n", i, tab[i]);
	

		printf("Value we stored: %d\n\n", temp);

	

		
		//tab[i] = tab[size];
		//tab[size] = temp;
		aka--;
		i++;

		printf("Table %d: %d\n", i, tab[i]);
	
	}
}





void	ft_rev_int_tab(int *tab, int size)
{
	int aka = size - 1;
	int tabEx[size];

	printf("Storing all tables beforing making changes");
	while (aka-- && aka >= 0)
	{
		printf("\n\nFirst Number: %d\n\n", aka);
		
		
			//printf("Starting with the last table\n");
			//printf("Current Table Value: %d\n", tab[aka]);
			tabEx[aka] = tab[aka];
			printf("Value of new tabEx: %d\n", tabEx[aka]);
			//tab[aka - 1] = tab[aka];
			tab[aka] = tabEx[aka];
			printf("\n\n\nCURRENT FETCH ARRAY: %d\n", aka / 2 - 1);
			printf("DEBUG: Table 1: %d\n\n\n", tab[0]);
		break;		
		aka--;
	}	

	printf("\nTable 1: %d \nTable 2: %d\nTable 3: %d\nTable 4: %d\nTable 5: %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
