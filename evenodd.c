#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer:");
    scanf("%d", &a);
\
    (a % 2 ==0) ? printf("%d is even", a) : printf("%d is odd", a);
    return 0;
}