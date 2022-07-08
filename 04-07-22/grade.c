// 04-07-2022 Q4

#include <stdio.h>

int main()
{
	int marks;
	printf("Enter marks : ");
	scanf("%d", &marks);
	if(marks < 50) printf("Grade : F\n");
	else if(50 <= marks && marks < 60) printf("Grade : C\n");
	else if(60 <= marks && marks < 70) printf("Grade : B\n");
	else if(70 <= marks && marks < 80) printf("Grade : B+\n");
	else if(80 <= marks && marks < 90) printf("Grade : A\n");
	else if(90 <= marks && marks <= 100) printf("Grade : A+\n");
	return 0;
}
