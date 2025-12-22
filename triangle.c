#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter base and height of triangle:\n");
    scanf("%f%f",&b,&h);
    area=(b*h)/2;
    printf("Area of triangle=%f",area);
    return 0;
}