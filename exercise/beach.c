#include<stdio.h>
#include<stdlib.h>
void input(int b[][100], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("b[%d][%d] =", i, j);
            scanf("%d",&b[i][j]);
        }
    }
}
void output(int b[][100], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
}
int sum(int b[][100], int n, int m)
{
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(b[i][j] % 2 == 0)
                sum1 += b[i][j];
            if(b[i][j] % 2 != 0)
                sum2 += b[i][j];
        }
    }
    sum1 = sum1 / 2;
    return sum1 + sum2;
}
void spiral(int b[][100], int n, int m)
{
    int i, j;
    m++;
    if(b[n][m] == 0)
    {
        b[n][m] = 2;
    }
    n--;
    for(j = m; j > m - 2; j--)
    {
        if(b[n][j] == 0)
            b[n][j] = 2;
    }
    for(i = n; i < n + 2; i++)
    {
        if(b[i][j] == 0)
            b[i][j] = 2;
    }
    for(; j < m + 1; j++)
    {
        if(b[i][j] == 0)
            b[i][j] = 2;
    }
}
void move(int b[][100], int n, int m)
{
    int r = 0, c = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(b[i][j] == 1)
            {
                spiral(b, i, j);          
            }    
        }
    }
}
int main ()
{
    int a[100][100];
    int n, m;
    printf("enter rows and colums :");
    scanf("%d %d", &n, &m);
    input(a, n, m);
    output(a, n, m);
    move(a, n, m);
    printf("\n");
    output(a, n, m);
    printf("%d",sum(a, n, m));
}