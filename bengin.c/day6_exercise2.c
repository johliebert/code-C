#include<stdio.h>
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
int chose_max_number (int arr[][100], int n, int m)
{
    
    int maximum = 0;
    for(int i = 0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            if( arr[i][j] > maximum )
            {
                maximum = arr[i][j];
            }           
        }  
    }
    printf("maximun = %d",maximum);
}
int main ()
{
    int arr[100][100];
    int n, m;
   printf(" input rows and colums\n ");
    printf("rows = ");
    scanf("%d",&n);
    printf("colums = ");
    scanf("%d",&m);
    input_multi(arr, n, m);
    output_multi(arr, n, m);
    chose_max_number(arr, n, m);
}