#include<stdio.h>
#include<string.h>
int main ()
{
    char solution[] = "Thanh map dit\n";
    char answer[30];
    char answer1[30];
    do
    {
        printf("Can you play the game\n");
        scanf("%s",answer1);
        getchar();
        printf("Who do you like ?\n");
        fgets(answer, sizeof answer, stdin);
    } while (strcmp(solution,answer) != 0);
    printf("Bingo, you choose the right answer\n");
    return 0;
}