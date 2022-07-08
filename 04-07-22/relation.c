// 04-07-2022 Q6

#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	if(a == b) printf("%d is equal to %d\n", a, b);
	else printf("%d is not equal to %d\n", a, b);
	
	if(a > b) printf("%d is greater to %d\n", a, b);
	else printf("%d is greater to %d\n", a, b);
	
	if(a < b) printf("%d is smaller to %d\n", a, b);
	else printf("%d is smaller to %d\n", a, b);
	return 0;
}
