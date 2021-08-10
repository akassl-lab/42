#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void 	ft_rev_int_tab2(int *tab, int size);
void 	ft_rev_int_tab3(int *tab, int size);


int	main(void)
{
	int *aka;
	aka[0] = 1;
	aka[1] = 2;
	aka[2] = 3;
	
	ft_rev_int_tab3(aka, 3);
	
	printf("table 1 - Value: %d\n", aka[0]);
	printf("table 2 - Value: %d\n", aka[1]);
	printf("table 3 - Value: %d\n", aka[2]);
	
	return (0);
}


void ft_rev_int_tab3(int *tab, int size)
{
	int		temp;
	int		i;
	size--;

	while( i <= size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}

	printf("Table 1 Value: %d\n", tab[0]);
}


void	ft_rev_int_tab2(int *tab, int size)
{
	int i = 0;
	int temp;
	int aka = size;

	while( i < (size))
	{
		temp = tab[i]; 
		int iTable = size - i;

		
		printf("\nOriginal Table and Value: %d, %d", i, tab[i]);
		printf("\nLAST TABLE AND VALUE: %d, %d\n\n\n\n", iTable - 1, tab[iTable - 1]);
		//printf("Whats my temp value? %d\n\n", temp);
	

	//	printf("\n\n|||Value of table %d - Value: %d\n\n", i, temp);


		int tempAgainLast;
		int tempAgainFirst;
		tempAgainLast = tab[iTable - 1];
		tempAgainFirst = tab[i];

		tab[iTable - 1] = tempAgainFirst;
		tab[i] = tempAgainLast;

	//	tab[i] = tab[iTable - 1];
	//	tab[iTable] = temp;


		
		//tab[i] = tab[size];
		//tab[size] = temp;
		//aka--;
		//i++;

		printf("\nTable %d: New Value: %d\n", i, tab[i]);
	
		aka--;
		i++;

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
