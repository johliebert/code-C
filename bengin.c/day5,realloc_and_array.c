#include<stdio.h>
#include<stdlib.h>
void input_arr(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d] =", i);
        scanf("%d", (arr + i));
    }
}
void print_arr(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d] =%d\n", i, *(arr + i));
    }
}
void add(int *arr,int val, int  pos, int *n)
{
    if (pos < 0)
    {
        pos =0;
    }
    else if (pos >= *n)
    {
        pos = *n;
    }
    arr = realloc(arr, *n + 1 * sizeof(int));
    *(arr + pos) = val;
    (*n)++;
    
}
int main ()
{
    int *arr;
    int n, val, pos;
    do
    {
        printf(" input n =");
        scanf ("%d", &n);
    } while (n < 0||n > 100);
    arr =(int *)malloc(n * sizeof(int));
    printf("input val =");
    scanf ("%d", &val);
    printf("input pos =");
    scanf ("%d", &pos);
    input_arr(arr, n);
    print_arr(arr, n);
    add(arr, val, pos, &n);
    print_arr(arr, n);
    free(arr);
    return 0;
}