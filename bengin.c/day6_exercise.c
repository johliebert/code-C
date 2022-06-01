#include<stdio.h>
/*
int main ()
{
    int arr[50][50];
    int rows, colums;
    int n, m;
    printf("input rows and colums\n");
    scanf("%d",&n);
    scanf("%d",&m);
    for(rows = 0; rows < n; rows++)
    { 
       for(colums = 0; colums < m; colums++)
        {
            printf("arr[%d][%d] = ",rows, colums);
            scanf("%d",&arr[rows][colums]);
        }
    }
    for(rows = 0; rows < n; rows++)
    {
        for(colums = 0; colums < m; colums++)
        {
            printf("%5d",arr[rows][colums]);
        }
        printf("\n");
    }
}*/
void input_multi (int arr[][100], int n, int m)
{
    for(int i = 0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            printf("arr[%d][%d] = ",i, j);
            scanf("%d",&arr[i][j]);
        }  
    }
}
void output_multi (int arr[][100], int n, int m)
{
    for(int i = 0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");  
    }
}
int main ()
{
    int arr[100][100];
    int n, m;
    printf("input rows and colums\n");
    printf("rows = ");
    scanf("%d",&n);
    printf("colums = ");
    scanf("%d",&m);
    input_multi(arr, n, m);
    output_multi(arr, n, m);   
}