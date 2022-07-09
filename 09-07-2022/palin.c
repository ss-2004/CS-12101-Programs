// 09-07-22 Q2
#include <math.h>
#include <stdio.h>
int main()
{
	int rev=0, copy1, copy2, n, c=0;
	scanf("%d", &n);
	copy1 = n;
	copy2 = copy1;
	while(copy2>0)
	{
		c++;
		copy2/=10;
	}
	while(copy1>0)
	{
		rev = rev + (copy1%10)*(int)pow(10, --c);
		copy1/=10;		
	}

	if(n == rev) printf("PALIN\n;
	else printf("NOT PALIN\n;
	return 0;
}
