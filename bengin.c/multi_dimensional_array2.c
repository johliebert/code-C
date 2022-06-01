#include<stdio.h>
int trans(int arr, int rows, int colums)
{

}
int main ()
{
    
    int arr[3][5] = {{13, 4, 8, 14, 1}, {9, 6, 3, 7, 21}, {5, 12, 17, 9, 3}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    printf(" multi dimensional array new:\n");
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
}