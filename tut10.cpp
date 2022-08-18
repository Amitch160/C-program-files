#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b, sum, c, x;
    // char c;
    printf("Enter number a,b,c:");
    x = scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    // printf("%d \n%d", a, b);
    printf("\n%d", sum);
    printf("\n%d", x);

    return 0;
}