#include <stdio.h>

int main()
{
	int i, n, k=0; scanf("%d %d", &n, &k);
	int a[n], b[n];
	for(i=0; i<n; i++)scanf("%d", &a[i]);
	
	for(i=k; i<n; i++)
		b[i-k] = a[i];
		
	for(i=0; i<k; i++)
		b[n-i-1] = a[k-i-1];
	
	for(i=0; i<n; i++)printf("%d, ", b[i]);
	printf("\n");

	return 0;
}
