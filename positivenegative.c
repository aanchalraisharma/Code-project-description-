#include<stdio.h>
int main()
{
    float x;
    printf("Enter x value:\n");
    scanf("%f",&x);
    if(x>0)
    {
        printf("x is positive.");
    }
    else if(x<0) 
    {
        printf("x is negative.");
    }
    else
    {
    printf("x is zero.");
    }
return 0;    
}