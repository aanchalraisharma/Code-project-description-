#include<stdio.h>
int main()
{
    float principle, time, rate, simple_interest;
    printf("Enter principle amount:\n");
    scanf("%f",&principle);
    printf("Enter time:\n");
    scanf("%f",&time);
    printf("Enter rate of interest:\n");
    scanf("%f",&rate);
    simple_interest=(principle*time*rate)/100;
    printf("The simple_interest:%f\n",simple_interest);
    return 0;

}