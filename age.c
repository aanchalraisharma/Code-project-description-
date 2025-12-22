#include<stdio.h>
int main()
{
    int a;
    printf("Enter age:\n");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("Eligible to vote.");
    }
    else printf("Not eligible to vote.");
    return 0;
}