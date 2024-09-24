#include<stdio.h>
//write a program to calculate perimeter of rectangle. Take sides a & b, from the user

int main ()
{
    int a,b;
    // a and b are two sides of rectangle
    printf("enter two sides of rectangle");
    scanf("%d%d",&a,&b);
    printf("perimeter of rectangle is %d",2*(a+b));

    return 0;
}