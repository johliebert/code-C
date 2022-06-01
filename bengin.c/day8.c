#include<stdio.h>
#include<stdbool.h>
#include<math.h>
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
int min_division (int arr[][100], int n, int m)
{
    int min;
    for(int i = 0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
          if(arr[i][j] % 3 == 0)
          {
              min = arr[i][j];
              break;
          }
        }
    }      
    for(int i = 0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] % 3 == 0 && arr[i][j] < min)
                min = arr[i][j];
        }  
    }
    return min;
}
bool prime_number(int prime)
{
    if(prime < 2)
        return false;
    else
    {
        for(int i = 2; i <= sqrt((double)prime); i++)
        {
            if(prime % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int count_prime (int arr[][100], int n, int m)
{
    int count = 0;
    for(int i = 0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            if(prime_number(arr[i][j]))
            {
                count++;
            }
        }  
    }
    return count;
}
int main () 
{
    int arr[100][100];
    int n, m;
    printf("input rows = ");
    scanf("%d",&n);
    printf("input colums = ");
    scanf("%d",&m);
    input_multi(arr, n, m);
    output_multi(arr, n, m);
    printf("value min in array is %d \n",min_division(arr, n, m));
    printf("there are %d prime number in multi dimensional\n",count_prime(arr, n, m));
}