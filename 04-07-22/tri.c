// 04-07-2022

#include <stdio.h>

int main()
{
	int angle1, angle2, angle3;
	printf("Enter angles : ");
	scanf("%d %d %d", &angle1, &angle2, &angle3);
	if(angle1+angle2+angle3 == 180)
		printf("VALID TRIANGLE");
	else
		printf("INVALID TRIANGLE");
	return 0;
}
