#include <stdio.h>

int main()
{
	int i, n, ns=0, ps=0; scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)scanf("%d", &arr[i]);
	
	printf("\nEven elements : \n");
	for(i=0; i<n; i++)
		if(arr[i]%2==0) printf("%d, ", arr[i]);
	printf("\nOdd elements : \n");
	for(i=0; i<n; i++)
		if(arr[i]%2!=0) printf("%d, ", arr[i]);
	printf("\n");
	
	return 0;
}
