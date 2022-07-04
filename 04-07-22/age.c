// 04-07-2022 Q1

#include <stdio.h>

int main()
{
	int age;
	printf("Enter age : ");
	scanf("%d", &age);
	if(age>=18)
		printf("ELIGIBLE TO VOTE\n");
	else
		printf("INELIGIBLE TO VOTE\n");

	return 0;
}
