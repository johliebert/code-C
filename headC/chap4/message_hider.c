#include<stdio.h>
#include"encrypt.h"
int main ()
{
    char msg[80];
    while(fgets(msg, sizeof(msg), stdin))
    {
        encrypt(msg);
        printf("%s\n", msg);
    }
}