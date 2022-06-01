#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i, n1, n2, *ptr, sum;
    printf("input n1 =");
    scanf("%d", &n1);
    ptr = (int*)malloc(n1*sizeof(int));
    printf("address of memory = %d ", ptr);
    printf(" input n2 =");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2*sizeof(int));
    printf("address of memory = %d", ptr);
    free(ptr);
    return 0;   
}