#include <stdio.h>
#include <limits.h>
int main()
{
	int i, n, s=0; scanf("%d", &n);
	int min=INT_MAX, max=INT_MIN, arr[n];
	for(i=0; i<n; i++)scanf("%d", &arr[i]);
	
	for(i=0; i<n; i++)
	{
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}
	printf("Max = %d\nMin = %d\n", max, min);

	return 0;
}
