#include<stdio.h>
int fibonacci(int n)
{
    if(n < 0)
        return -1;
    if(n == 1 || n == 0)
    {
        return n;
    }
    return fibonacci(n - 1) +fibonacci(n - 2);
}
int main()
{   
    int i;

    for(i = 0; i <= 10; i++)
    {
        printf("%5d",fibonacci(i));
    }
}
