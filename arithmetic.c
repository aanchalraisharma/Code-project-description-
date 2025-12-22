#include<stdio.h>
int main()
{
    float a,b,c;
    char ch;
    printf("Enter an arithmetic character:\n");
    scanf("%c",&ch);
    printf("Enter a and b values:\n");
    scanf("%f%f",&a,&b);
    switch(ch)
    {
        case '+':c=a+b;
        printf("Addition of a and b:%f\n",c);
        break;
        case '-':c=a-b;
        printf("Subtraction of a and b:%f\n",c);
        break;
        case '*':c=a*b;
        printf("Multiplication of a and b:%f\n",c);
        break;
        case '/':c=a/b;
        printf("Division of a and b:%f\n",c);
        break;
        
        default:printf("Enter only +,-,*,/ values.");
    }
    return 0;
}