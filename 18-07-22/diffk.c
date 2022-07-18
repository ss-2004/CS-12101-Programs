#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, t=0, n, k=0; scanf("%d %d", &n, &k);
	int arr[n];
	for(i=0; i<n; i++)scanf("%d", &arr[i]);
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(abs(arr[i]-arr[j])==k)
				t++;
		}
	}
	printf("Pairs having difference of %d : %d\n", k, t/2);
	
	return 0;
}
