#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10];
    int i,j,R1,C1,R2,C2;
    printf("Enter size of matrix 1:\n");
    scanf("%d%d",&R1,&C1);
    printf("Enter size of matrix 2:\n");
    scanf("%d%d",&R2,&C2);
    if((R1==R2)&&(C1==C2))
    {
        printf("Enter elements of matrix 1:\n");
        for(i=0;i<R1;i++)
        {
            for(j=0;j<C1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter elements of matrix 2:\n");
        for(i=0;i<R2;i++)
        {
            for(j=0;j<C2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<R1;i++)
        {
            for(j=0;j<C1;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("The resultant matrix:\n");
        for(i=0;i<R1;i++)
        {
            for(j=0;j<C1;j++)
            {
                printf("%3d",sum[i][j]);

            }
            printf("\n");

        }
    }
    else printf("Matrix addition is not possible.");
    return 0;
}