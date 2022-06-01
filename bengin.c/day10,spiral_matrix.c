#include<stdio.h>
#include<math.h>
void spiral (int a[][100], int n, int m)
{
    int val = 1;
    int r = 0;
    int c = 0;
    while(r < n && c < m)
    {
        for(int i = c; i < m; i++)
        {
            a[r][i] = val++;
        }
        r++;
        for(int i = r; i < n; i++)
        {
            a[i][m - 1] = val++;
        }
        m--;
        for(int i = m -1; i >= c; i--)
        {
            a[n - 1][i] = val++;
        }
        n--;
        for(int i = n - 1; i >= r; i--)
        {
            a[i][c] = val++;
        }
        c++;            
    }
}
int main ()
{
    int spi[100][100];
    int n;
    printf("enter n = ");
    scanf("%d",&n);
    int m = n;
    spiral(spi, n, m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%5d",spi[i][j]);
        }
        printf("\n");
    }
}