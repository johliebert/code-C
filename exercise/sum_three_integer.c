#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main ()
{
    int k, s, z;
    int count = 0;
    scanf("%d %d", &k, &s);
    for(int x = 0; x <= k; x++)
    {
        for(int y = 0; y <= k; y++)
        {
            z = s - x - y;
            if(z >= 0 && z <= k)
                count++;
        }        
    }
    printf("%d\n", count);
}