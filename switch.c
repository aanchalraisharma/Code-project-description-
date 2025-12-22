#include<stdio.h>
int main()
{
    int ch;
    printf("Enter a number between 1 and 7 where 1=Sunday, 2=Monday, 3=Tuesday, 4=Wednesday, 5=Thursday, 6=Friday, 7=Saturday:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Sunday");
        break;
        case 2:printf("Monday");
        break;
        case 3:printf("Tuesday");
        break;
        case 4:printf("Wednesday");
        break;
        case 5:printf("Thursday");
        break;
        case 6:printf("Friday");
        break;
        case 7:printf("Saturday");
        default:printf("Enter a number between 1 and 7");
    }
    
    return 0;
}