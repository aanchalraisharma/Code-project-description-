#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter fahrenheit value:\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Celsius:%f",c);
    return 0;
}