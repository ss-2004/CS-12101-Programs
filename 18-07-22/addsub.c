#include <stdio.h>

int main()
{
	int i, j, m, n, s=0; 
	printf("Enter m, n : \n"); scanf("%d %d", &m, &n);
	int arr1[m][n], arr2[m][n], sum[m][n], dif[m][n];
	
	printf("Enter matrix 1 : \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++) 	
			scanf("%d", &arr1[i][j]);
	}
	printf("Enter matrix 2 : \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++) 	
			scanf("%d", &arr2[i][j]);
	}
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
			dif[i][j] = arr1[i][j] - arr2[i][j];
		}
	}
	
	printf("SUM : \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			printf("%d\t", sum[i][j]);
		printf("\n");
	}
	printf("DIFF : \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			printf("%d\t", dif[i][j]);
		printf("\n");
	}

	return 0;
}
