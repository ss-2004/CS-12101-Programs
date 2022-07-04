// 04-07-2022 Q8

#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter a, b, c : ");
	scanf("%d %d %d", &a, &b, &c);
	int max = a>b?a:(b>c?b:c);
	if(a == max) printf("A is largest\n");
	if(b == max) printf("B is largest\n");
	if(c == max) printf("C is largest\n");

	if(a==b && b==c) printf("All numbers are equal\n");
	
	if(a==b && a==max) printf("A, B are equal and greater than C\n");
	else if(b==c && b==max) printf("B, C are equal and greater than A\n");
	else if(c==a && c==max) printf("C, A are equal and greater than B\n");

	return 0;
}
