#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{
    int age;
    int address;
    char c[] = "abcd";
    char name[30];
    printf("enter age :");
    scanf("%d",&age);
    printf("your age is %d\n",age);
    getchar();                          //note: you should use scanf after use fgets.// 
    printf("enter name:");
    fgets(name, sizeof(name), stdin);
    printf("your name is :");
    puts(name);
}