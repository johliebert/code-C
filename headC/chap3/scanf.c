#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char food[5];
    int a = 1;
    int c = 2;
    printf("enter food: ");
    scanf("%s", food);
    printf("food is %s\n", food);
    printf("%d\n",a);
    a = c; 
    printf("%d\n",a);   
}