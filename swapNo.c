// 13-06-2022 Q2

#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter a, b : ");
	scanf("%d %d", &a, &b);

	a = a+b;
	b = a-b;
	a = a-b;

	printf("Swapped : %d %d \n", a, b);

	return 0;
}
