#include<stdio.h>
#include<string.h>
int size(char word[])
{
    int j = 0;
    for( int i = 0; word[i] != '\0'; i++)
    {
        j++;
    }
    j--;
    return j;
}
char symmetry(char word[], int size)
{
    int i;
    for(i = 0; i < size / 2; i++)
    {
        if(word[i] != word[size - 2 - i])
        {
            return 0;
        }
    }
    return 1;
}
int count(char word[], char n)
{
    int c = 1;
    for(int i = 0; i < strlen(word); i++)
    {
        if(word[i] == n)
        {
            c++;
        }
    }
    return c;
}
int main ()
{
    char word[100], n;
    printf("enter ");
    fgets(word, sizeof word, stdin);
    getchar();
    printf("%d\n",size(word));
    scanf("%c",&n);
    if(symmetry(word, size(word)) == 0)
    {
        printf(" it is not symmetry string\n");
    }
    else
    {
        printf("it is symmetry string\n");
    }
    printf("%d",count(word,n));
}