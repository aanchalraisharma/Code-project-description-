#include<stdio.h>
int main()
{
    int a[6],i,n,even=0,odd=0;
    printf("Enter size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("enter values:\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]%2==0) 
		{
            even++;
        }
    	else 
        {
            odd++;
        }
  	}
  	printf("the even numbers=%d odd numbers=%d",even,odd);

    return 0;
}