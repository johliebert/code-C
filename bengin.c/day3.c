#include<stdio.h>
#define MAXSIZE 100
int main ()
{
    int arr[MAXSIZE];
    int *p= &arr[0];
    int n;
    do
    {
        printf("n = ");
        scanf("%d", &n);
    }while (n<0 || n>100);
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", (p+i));
    }
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n", i, *(p+i));
    }
    int sum = 0;
    for (int *i=&arr[0]; i <= &arr[n-1]; i++)
    {
        sum += *i;
    }
    printf("%d",sum);
}