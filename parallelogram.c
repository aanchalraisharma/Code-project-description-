#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter base value:\n");
    scanf("%f",&b);
    printf("Enter height value:\n");
    scanf("%f",&h);
    area=b*h;
    printf("Area of parallelogram:%f",area);
    return 0;
}