#include <stdio.h>

int main()
{
	int i, n, ns=0, ps=0; scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)scanf("%d", &arr[i]);
	for(i=0; i<n; i++)
	{
		if(arr[i]>=0) ps+=arr[i];
		else ns+=arr[i];
	}
	printf("+ve Sum = %d\n-ve Sum = %d\n", ps, ns);
	return 0;
}
