#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,compound_interest,amount;
    printf("Enter principal value:\n");
    scanf("%f",&p);
    printf("Enter rate of interest:\n");
    scanf("%f",&r);
    printf("Enter time(in years):\n");
    scanf("%f",&t);
    amount=p*powf((1+r/100),t);
    compound_interest=amount-p;
    printf("Compound interest:%f\n",compound_interest);
    printf("amount:%f\n",amount);
    return 0;
}