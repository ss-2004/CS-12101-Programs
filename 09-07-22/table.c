// 09-07-22 Q6

#include <stdio.h>
int main()
{
	int i,n;
	scanf("%d", &n);
	for(i=1; i<=10; i++) printf("%d x %d = %d\n", n, i, i*n);
	printf("\n");
	return 0;
}
