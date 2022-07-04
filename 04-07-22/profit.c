// 04-07-2022 Q9

#include <stdio.h>

int main()
{
	int cp, sp;
	printf("Enter cost price : ");
	scanf("%d", &cp);
	printf("Enter sale price : ");
	scanf("%d", &sp);

	if(sp > cp)
		printf("Profit : %d\n", (sp - cp));
	else 
		printf("Loss : %d\n", (cp - sp));
	return 0;
}
