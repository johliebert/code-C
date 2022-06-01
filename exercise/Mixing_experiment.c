#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int a[10][3], n, m_a, m_b;
    int s1, s2, s3;
    scanf("%d %d %d", &n, &m_a, &m_b);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)

            scanf("%d", &a[i][j]);
    }
    if(n == 1)
    {
        s3 = (float)(a[0][0] / a[0][1]) - (float)(m_a / m_b);
        if(s3 != 0)
        {
            printf("-1\n");
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                s1 = a[i][0] + a[j][0];
                s2 = a[i][1] + a[j][1];
                if((float)s1 / (float)s2 - (float)(m_a / m_b) == 0)
                    printf("%d\n", a[i][2] + a[j][0]);
            }
        }
    }
}