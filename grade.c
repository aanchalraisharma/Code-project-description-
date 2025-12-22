#include<stdio.h>
int main()
{
    float x;
    printf("Enter percentage:\n");
    scanf("%f",&x);
    if(x>=90)
    {
        printf("Grade A");
    }
    else if((x>=80)&&(x<90))
    {
        printf("Grade B");
    }
   else if((x>=70)&&(x<80))
    {
        printf("Grade C");
    }
    else if((x>=60)&&(x<70))
    {
        printf("Grade D");
    }
    else if((x>=50)&&(x<60))
    {
        printf("Grade E");
    }
    else printf("Fail");
    return 0;
}