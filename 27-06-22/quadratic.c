// 27-06-22 Q5

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter coefficients of equation as ax^2 + bx + c\n");
    printf("a : ");    
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);
    printf("c : ");
    scanf("%d", &c);
    if(b*b - 4*a*c >= 0)
    {
        float root1=(-b+sqrt(b*b-4*a*c))/(2*a), root2=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("X1 = %f\nX2 = %f\n", root1, root2);
    }
    else
        printf("Complex roots");

    return 0;
}
