#include <stdio.h>
int main()
{
	int i, j;
	
	for(i=1; i<=5; ++i)
	{
		if(i==1 || i==5)
			printf(" ");
		for(j=1; j<=5; ++j)
		{
			if(i==5 || i==1)
				printf("*");
			else if(j==1 || j==5)
				printf("*");
			else 
				printf(" ");
		}
		printf("\n"); 
	} 
	return 0;
}

