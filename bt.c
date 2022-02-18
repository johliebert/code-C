#include<stdio.h>
#include<math.h>
int main()
{
	float sum = 0;
	for (int n = 2;n <= 200;n += 2)
	{
		sum =sum + (1.0 / n);
	}
	printf("%f", sum);
}