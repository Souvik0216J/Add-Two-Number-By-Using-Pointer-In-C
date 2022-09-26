#include<stdio.h>
int main()
{
    int a, b, *p1, *p2, ans;
    
    p1 = &a;
    p2 = &b;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    ans = *p1 + *p2;

    printf("Result Is: %d", ans);
    return 0;
}
