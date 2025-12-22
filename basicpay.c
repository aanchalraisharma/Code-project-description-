#include<stdio.h>
int main()
{
    float BP,TA,DA,G;
    printf("enter basic pay value:\n");
    scanf("%f",&BP);
    TA=(0.1*BP);
    DA=(0.15*BP);
    G=BP+TA+DA;
    printf("The gross salary of employee:%f\n",G);
    return 0;
}