#include<stdio.h>
#include<stdlib.h>
int obcode_1(int a[])
{
      for(int i = 0; i < 10; i += 5)
    {
        if(i == 5)
            a[a[i+3]] = a[a[i+1]] * a[a[i+2]];
        else
            a[a[i+3]] = a[a[i+1]] + a[a[i+2]];
    }
}
int main ()
{   
    int a[100] = {1, 9, 10, 3, 2, 3, 11, 0, 99, 30, 40 ,50};
    obcode_1(a);
    for(int i = 0; i < 12; i++)
    {
        printf("%d\n", a[i]);
    }
}
