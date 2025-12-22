#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a value:\n");
    scanf("%f",&a);
    printf("enter b value:\n");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping,\n");
    printf("a value:%f\n",a);
    printf("b value:%f\n",b);
    return 0;

}