#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter radius value:\n");
    scanf("%f",&radius);
    area=radius*radius*3.14;
    printf("Area of circle:%f\n",area);
    return 0;
}