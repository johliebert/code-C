#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include <conio.h>
int main()
{
	int a, b, c;
	int i;
	int n=0;
	int i1;
	int cout=0 ;
	printf("nhap 3 so: ");
	scanf_s("%d%d%d", &a, &b, &c);
	int max = a;
	if (max)
	{
		if (b > max)
		{
		max = b;
		}
		if (c > max)
		{
			max = c;
		}
		printf("max=%d\t", max);
	}
	int min = a;
	if (min)
	{
		if (b < min)
			min = b;
	if (c < min)
			min = c;
		printf("min=%d\t", min);
	}
	int max2=0 ;
	int max3=0 ;
	for (i = max;i >= min;i--)
	{		
		if (i % 3 == 0)
		{
			max2=i;
				break;
		}
	}
	printf("\nso lon nhat chia het cho 3 trong khoang (%d,%d)=%d", min, max, max2);
		
	
	for (i = min;i <= max;i++)
	{
		n = i;
		for (i1 = 2;i1 <= sqrt(n);i1++)
		{
			loop:
			if (n % i1 == 0)
			{
				goto loop;
			}

			if (n % i1 != 0)
			{
				max3 = i;
				goto kq;
			}

		}
	}
	kq:
		printf("\n so nguyen to nho nho (%d,%d)=%d", min, max, max3);
}


