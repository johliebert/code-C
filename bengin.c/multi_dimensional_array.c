#include<stdio.h>
int main ()
{
    int arr[3][5] = {{5, 12, 13, 4, 15}, {4, 22, 13, 4, 5}, {11, 22, 33, 44, 35}};
    /*int arr[0][0] = 5;
    int arr[1][3] = 14;*/
    for (int i=0; i < 3; i++)
    {
        for(int j=0; j < 5; j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
}