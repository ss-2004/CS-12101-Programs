#include <stdio.h>
int main()
{
    int i, j, k;
    for (i=1; i<=3; i++)
    {
        for(j=1; j<=3-i; j++) printf(" ");
        for(j=1; j<=2*i-1; j++) printf("*");
        printf("\n");
    }

    for (i=1; i<3; i++)
    {
        for(j=1; j<=i; j++) printf(" ");
        for(j=1; j<=2*(3-i)-1; j++) printf("*");
        printf("\n");
    }
}
