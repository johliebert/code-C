#include<stdio.h>
#include<math.h>
#include<string.h>
void correct (char voc[], int size)
{
    int first = 0, last = size - 1;
    while (voc[first] == ' ')
    {
        first++;
    }
    while (voc[last] == ' ')
    {
        last--;
    }
    if (voc[first] >= 'a' && voc[first] <= 'z' )
    {
        voc[first] -= 32;
    }
    for( int i = first; i <= last; i++)
    {
        if(voc[i] == ' ' && voc[i+1] == ' ')
        {
            continue;
        }
        if(voc[i] == ' ' && voc[i+1] >= 'a' && voc[i+1] <= 'z')
        {
            voc[i+1] -= 32;
        }
        printf("%c",voc[i]);
    }    
}
int main ()
{
    char word[100];
    char w[] = "huhu";
    int size, size2;
    printf("enter word :");
    fgets(word , sizeof word, stdin);
    size = strlen(word) - 1;// strlen no se doc luon \000 , khi printf char se co them \n neu ta strlen thi se tang them 2
    size2 = strlen(w);
    correct(word, size);
}