#include <stdio.h>

int main()
{
	int i, n, s=0; scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)scanf("%d", &arr[i]);
	for(i=0; i<n; i++)s+=arr[i];
	printf("Sum = %d\n", s);
	return 0;
}
