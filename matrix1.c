#include <stdio.h>

int main()
{
    int i, j, a, b, p[10][10];
    
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &a, &b);
    
    printf("Enter array elements:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }

    printf("The entered array is:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}