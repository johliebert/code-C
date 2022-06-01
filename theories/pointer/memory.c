#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, n1, *p1, *p, sum = 0, sum1 = 0;
    printf("enter:");
    scanf("%d",&n);
    p = (int *)malloc(n * sizeof(int));
    p1 = (int *)calloc(n, sizeof(int));
    if(p == NULL)
    {
        printf("error\n");
        exit(0); 
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
        sum += *(p + i);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d", p1 + i);
        sum1 += *(p1 + i);
    }
    printf("%d\n",sum);
    printf("%d\n",sum1);
    p = (int *)realloc(p, n1 *sizeof(int));
    free(p);

    return 0;
}