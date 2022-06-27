// 13-06-2022 Q4

#include <stdio.h>

int main()
{
	int a, b, t;
	printf("Enter numbers : ");
	scanf("%d %d", &a, &b);

	t = a;
	a = b;
	b = t;

	printf("Swapped : %d %d \n", a, b);

	return 0;
}
