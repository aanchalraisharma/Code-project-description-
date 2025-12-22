#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a and b values:\n");
    scanf("%f%f",&a,&b);
    if(a>b)
    {
        printf("a is greater.");
    }
    else if(a<b)
    {
        printf("b is greater.");
    }
    else printf("a and b are equal.");
    return 0;
}