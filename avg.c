// 13-06-2022 Q5

#include <stdio.h>

int main()
{
	int i, marks;
	float sum=0.0;
	printf("Enter marks : ");

	for(i=0; i<5; i++)
	{
		scanf("%d", &marks);
		sum += marks;
	}
	
	printf("Avg = %f \n", (sum/5));

	return 0;
}
