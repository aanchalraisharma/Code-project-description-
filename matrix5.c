#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, zero = 0, total;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    total = r * c;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] == 0)
                zero++;
        }
    }

    if(zero > (total / 2))
        printf("The matrix is a Sparse Matrix.\n");
    else
        printf("The matrix is NOT a Sparse Matrix.\n");

    return 0;
}
