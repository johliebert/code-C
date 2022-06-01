#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *marks, n = 0, ans;
    marks = (int*)malloc(n * sizeof(int));
    if(marks == NULL)
    {
        printf("error\n");
    }
    else
    {
        printf("memory has been allocated by using malloc\n");
        printf("address :%d\n",marks);
        do
        {
            printf("enter marks : ");
            scanf("%d",&marks[n]);
            printf("would you like to add more(1 or 0)\n");
            scanf("%d",&ans);
            if(ans == 1)
            {
                marks =(int *)realloc(marks, n + 1 * sizeof(int));
                n++;
            }
            if(marks == NULL)
            {
                printf("error\n");
            }
            else
            {
                printf("memory has been reallocated by using real\n");
                printf("address :%d\n",marks);
            }
        } while (ans == 1);
    }
    for(int i = 0; i <= n; i++)
    {
        printf("marks of students %d are %d\n",i + 1, marks[i]);
    }
    return 0;
}