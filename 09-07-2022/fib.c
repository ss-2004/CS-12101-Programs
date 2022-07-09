// 09-07-22 Q1

#include <stdio.h>

int fibo(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return fibo(n-1) + fibo(n-2);
}

int main()
{
	int i;
	printf("Fibo of 8 : ");
	for(i=1; i<=8; i++)
		printf("%d, ", fibo(i)); 
	return 0;
}
