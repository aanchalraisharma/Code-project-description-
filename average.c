#include<stdio.h>
int main()
{
    float a,b,average;
    printf("Enter value a:\n");
    scanf("%f", &a);
    printf("Enter value b:\n");
    scanf("%f", &b);
    average=(a+b)/2;
    printf("The average of a and b:%.2f\n",average);
    return 0;
}