#include <stdio.h>
int main()
{
	int i, j, k;
	
	for(i=6; i>=1; i--)
	{
		for(j=6; j>=i; j--)printf("  ");
		for(j=1; j<=i; j++)printf(" %c  ", (char)(64+j));
		printf("\n"); 
	} 
	return 0;
}

