#include <stdio.h>
int main()
{
    int arr[100][100], arr2[100][100], arr3[100][100];
    int n, m;
    int sum = 0;
    int max = arr[0][0];
    int value = 0;
    printf("input rows\n");
    scanf("%d", &n);
    printf("input colums\n");
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("multi_dimensional 1:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("multi_dimensional 2:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", arr2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("Value when add all elenments in even rows is %d \n", sum);
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] > max)
        {
            max = arr[i][0];
        }
    }
    printf("maximum value in colum 1 is %d\n", max);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr3[i][j] = arr2[i][j] + arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", arr3[i][j]);
        }
        printf("\n");
    }
    for (int j = 0; j < m; j++)
    {
        for (int f = j + 1; f < m; f++)
            if (arr[1][j] < arr[1][f])
            {
                value = arr[1][j];
                arr[1][j] = arr[1][f];
                arr[1][f] = value;
            }
    }
    for (int j = 0; j < m; j++)
    {
        printf("%5d", arr[1][j]);
    }
}