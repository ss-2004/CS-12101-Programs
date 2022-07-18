#include <stdio.h>

int main()
{
	int i, n, s=0; scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)scanf("%d", &arr[i]);
	
	for(i=0; i<n; i++)s+=arr[i];
	printf("Avg = %0.2f\n", s*1.0/n);

	return 0;
}
