#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter n value");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum=%d",sum);
	return 0;
}