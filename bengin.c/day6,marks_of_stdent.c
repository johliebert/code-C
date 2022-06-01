#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int index = 0, i = 0, n;
    int *marks, answer;
    marks = (int *)malloc(sizeof(int));
    if (marks == NULL)
    {
        printf("memory cannot be allocated\n");
    }
    else 
    {
        printf("memory have been successfully allocated by using malloc\n");
        printf("marks = %p\n",marks); 
    }
    do
    {
        printf("enter marks =");
        scanf ("%d",&marks[index]);
        printf("would you like to add more 1 or 0\n");
        printf("your ans is");
        scanf("%d",&answer);
        if (answer == 1)
        {
            marks = (int *)realloc(marks,(index + 1) *sizeof(int));
            index++;
        }
        printf("memory have realloc  successfully by using realloc \n");
        printf("marks =%p\n",marks);
    } while (answer == 1); 
    for (int i = 0; i <= index; i++)
    {
        printf("marks of student %d are %d \n", i,marks[i]);
    }
    free(marks);
}