#include<stdio.h>
int main ()
{
    char quote[] = "i am in the darkness";
    char *i = quote;
    printf("%d", sizeof(quote));
    printf("\n%p", i);    
    printf("\n%d", *i);
    printf("\n%d", sizeof(*i)); 
}