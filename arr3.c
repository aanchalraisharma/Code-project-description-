#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("Enter number of subjects:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter marks:\n");
        scanf("%d",&a[i]);
    }    
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        printf("Total marks:%d\n",sum);
        return 0;
}