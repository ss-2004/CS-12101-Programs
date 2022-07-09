// 09-07-22 Q3

#include <stdio.h>
int main()
{
	int i,n, Prime=1;
	scanf("%d", &n);
	for(i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{		
			Prime=0;
			break;
		}
	}
	if(Prime) printf("PRIME\n");
	else printf("NOT PRIME\n");
	return 0;
}
