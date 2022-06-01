#include<stdio.h>
#include<math.h>
void input(int a[][100], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("arr[%d][%d] =",i, j);
            scanf("%d",&a[i][j]);
        }
    }
}
void output(int a[][100], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}
void spiral(int a[][100], int n, int m)
{
    int r = 0;
    int c = 0;
    while(r < n && c < m)
    {
        for(int i = c; i < m; i++)
        {
            printf("%5d",a[r][i]);
        }
        r++;
        for(int i = r; i < n; i++)
        {
            printf("%5d",a[i][m - 1]);
        }
        m--;
        for(int i = m - 1; i >= c; i--)
        {
            printf("%5d",a[n - 1][i]);
        }
        n--;
        for(int i = n - 1; i >= r; i--)
        {
            printf("%5d",a[i][c]);
        }
        c++;
    }
}
int main ()
{
    int spi[100][100];
    int n, m;
    do
    {
        printf("enter rows and colums :");
        scanf("%d",&n);
        scanf("%d",&m);
    }while( n <= 1 && m >= 1000);
    input(spi, n, m);
    output(spi, n, m);
    spiral(spi, n, m);
}