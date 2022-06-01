#include<stdio.h>
void swap (int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void addone (int *p)
{
    (*p)++;
}
void array(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] > a[j + 1])
                swap(&a[i], &a[j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%5d",a[i]);
    }
    printf("\n");
}
int main ()
{
    int n = 5;
    int ar[5] = {5, 4, 3, 2, 1};
    int a = 2, b = 7;
    int i=10;
    int *p = &i;
    array(ar, n);
    printf("a=%d, b=%d\n",a , b);
    swap (&a, &b);
    printf("a=%d, b=%d\n ",a , b);
    printf("%d\n", p);
    printf("%d\n",*p);
    addone(p);
    printf("%d\n", *p);
}   