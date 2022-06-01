#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{
    char fruit[] = "apple";
    char answer[30];
    do
    {
        printf("i guess, The fruit in your hand is ");
        scanf("%s",answer);                      

    } while (strcmp(fruit,answer) != 0);
    printf("bingo, you choose right\n");    
}