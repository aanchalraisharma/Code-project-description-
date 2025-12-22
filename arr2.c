#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter size of numbers:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter numbers:\n");
        scanf("%d",&a[i]);
    }
    printf("Reverse order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}