#include<stdio.h>
#define MAX_SIZE 100
int main ()
{
    int arr[MAX_SIZE];
    int n;
    do
    {        
        printf(" input n = ");
        scanf(" %d", &n);

    }while(n<0 || n>100);
    for(int i= 0; i < n; i++)
    {   
        printf("arr[%d] = ", i);
        scanf("%d", (arr + i));
    }
    for(int i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n", i, *(arr+i));
    }
}