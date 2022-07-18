#include <stdio.h>

int main()
{
	int i, j, t, n, s=0; scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)scanf("%d", &arr[i]);
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j] < arr[j+1])
			{
				t = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = t;
			}
		}
	}
	for(i=0; i<n; i++)printf("%d, ", arr[i]);
	printf("\n");
	
	return 0;
}
