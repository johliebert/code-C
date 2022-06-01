#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void input_arr(int arr[][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("arr[%d][%d] = ",i ,j);
            scanf("%d",&arr[i][j]);
        }
    }

} 
void output_arr(int arr[][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
} 
void eliminate_row(int arr[][100], int *r, int c, int r1)
{
    for(int i = r1; i < *r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            arr[i][j] = arr[i + 1][j];
        }
    }
    (*r)--;
}
void eliminate_colum(int arr[][100], int r, int* c, int c1)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = c1; j < *c; j++)
        {
            arr[i][j] = arr[i][j+1];
        }
    }
    (*c)--;
}
void swap (int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap_rows(int arr[][100], int r, int c)
{
    int r1, r2;
    printf("swap :");
    scanf("%d %d",&r1, &r2);
    for(int j = 0; j < c; j++)
    {
        swap(&arr[r1][j], &arr[r2][j]);
    }
}
void swap_colums(int arr[][100], int r, int c)
{
    int c1, c2;
    printf("swap :");
    scanf("%d %d",&c1, &c2);
    for(int i = 0; i < r; i++)
    {
        swap(&arr[i][c1], &arr[i][c2]);
    }
}
void max_diagonal(int arr[][100], int r)
{
    int max = arr[0][0];
    for(int i = 1; i < r; i++)
    {
       if(arr[i][i] > max)
       {
           max = arr[i][i];
       }
    }
    printf("max = %d\n",max);
}
void min_diagonal(int arr[][100], int r)
{
    int min = arr[0][0];
    for(int i = 1; i < r; i++)
    {
       if(arr[i][i] < min)
       {
           min = arr[i][i];
       }
    }
    printf("min = %d\n",min);
}
int main ()
{
    int arr[100][100];
    int c, r1, c1, r;
    printf("input rows =");
    scanf("%d",&r);
    printf("input colums =");
    scanf("%d",&c);
    printf("input number rows are delete =");
    scanf("%d",&r1);
    printf("input number colums are delete =");
    scanf("%d",&c1);
    input_arr(arr, r, c);
    output_arr(arr, r, c);
    max_diagonal(arr, r);
    min_diagonal(arr, r);
    eliminate_row(arr, &r, c, r1);
    printf("array dimensional after delete rows:\n");
    output_arr(arr, r, c);
    printf("array dimensional after delete columns :\n");
    eliminate_colum(arr, r, &c, c1);
    output_arr(arr, r, c);
    swap_rows(arr, r, c) ;
    printf(" after swap rows:\n");
    output_arr(arr, r, c);
    swap_colums(arr, r, c) ;
    printf(" after swap columns:\n");
    output_arr(arr, r, c);
}