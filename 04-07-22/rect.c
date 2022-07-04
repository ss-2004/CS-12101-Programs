// 04-07-2022 Q7

#include <stdio.h>

int main()
{
	int l,b;
	printf("Enter l : ");
	scanf("%d", &l);
	printf("Enter b : ");
	scanf("%d", &b);

	if(l*b > 2*(l+b))
		printf("Area is larger\n");
	else 
		printf("Perimeter is larger\n");
	
	return 0;
}
