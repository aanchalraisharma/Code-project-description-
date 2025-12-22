#include<stdio.h>
int main()
{
    float percentage;
    int a[100], i, n, sum=0;
    printf("Enter number of subjects:\n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter marks:\n");
        scanf("%d", &a[i]);
    }    
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    percentage = (float)sum/n;
    printf("Percentage = %f\n", percentage);
    return 0;
}
