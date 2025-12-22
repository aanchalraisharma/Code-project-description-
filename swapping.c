#include<stdio.h>
int main()
{
    float a,b,temp;
    printf("Enter a value:");
    scanf("%f",&a);
    printf("Enter b value:");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping,\n");
    printf("a value:%f\n",a);
    printf("b value:%f\n",b);
    return 0;
}