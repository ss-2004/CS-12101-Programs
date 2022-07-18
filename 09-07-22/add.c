// 09-07-22 Q7

#include <stdio.h>
int main()
{
	int sum=0, in;
	while(1)
	{
		scanf("%d", &in);
		if(in != 0)
			sum+=in;
		else
			break;
	}
	printf("Sum = %d\n", sum);
	return 0;
}
