// 09-07-22 Q4

#include <stdio.h>
int main()
{
	int i, a, b, sum=0;
	scanf("%d %d", &a, &b);
	for(i=a; i<=b; i++)
		if(i%2==0) sum+=i;
	
	printf("Sum = %d", sum);
	return 0;
}
