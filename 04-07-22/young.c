// 04-07-2022 Q10
#include <stdio.h>

int main()
{
	int r, s, a, y=0;
	printf("Ram : ");
	scanf("%d", &r);
	printf("Shyam : ");
	scanf("%d", &s);
	printf("Ajay : ");
	scanf("%d", &a);

	y = r<s?r:(s<a?s:a);

	if(y == r) printf("Ram is youngest\n");
	else if(y == s) printf("Shyam is youngest\n");
	else printf("Ajay is youngest\n");

	return 0;
}
