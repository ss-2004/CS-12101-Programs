// 04-07-2022 Q3

#include <stdio.h>

int main()
{
	int m=0, n=0;
	printf("Enter m : ");
	scanf("%d", &m);
	if(m>0)
		n = 1;
	else if(m<0)
		n = -1;

	printf("n = %d\n", n);
	return 0;
}
