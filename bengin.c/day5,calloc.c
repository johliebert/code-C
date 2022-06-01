#include<stdio.h>
#include<stdlib.h>
int main ()
{
    
   /* calloc = (int*) callo(100, sizeof(int));*/
    
    int n, i, *ptr, sum = 0;
    printf(" input n phan tu = ");
    scanf("%d", &n);
    ptr = (int*)calloc (n, sizeof(int));
    if (ptr == NULL)
    {
        printf(" loi khong the cap phat bo nho ");
        return 0;
    }
    printf(" input value ");
    for (i=0; i<n; i++)
    {
        scanf("%d",(ptr+i));
        sum += *(ptr + i);
    }
    printf(" tong = %d",sum);
    free(ptr);
    return 0; 
}