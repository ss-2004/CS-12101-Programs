#include <stdio.h>
int main()
{
	int i, j, k, l=1;
	
	for(i=7; i>=1; i--)
	{
		for(j=1; j<=i; j++)printf(" %c ", (char)(64+j));			
		if(i<=6)
		{
			printf(" ");
			if(i<=5)
				for(k=1; k<=l; k++)printf("  ");	
			else
				printf("  ");
			for(k=j-1; k>=1; k--)printf(" %c ", (char)(64+k));
			l+=3;
		}
		else
			for(k=j-2; k>=1; k--)printf(" %c ", (char)(64+k));
		printf("\n"); 
	}
	
	return 0;
}

