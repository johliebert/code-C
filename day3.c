#include<stdio.h>
#include<math.h>
#include<string.h>
/*
float fun(float x)
{
	float result;
	result=exp(x);
	return result;
}
double fun1(double x)
{
	double kq=sin(x);
	return kq;
}
double fun2(double x)
{
	double kq = cos(x);
	return kq;
}
int binarynumber(int decimalnumber)
{
	float res = 0;
	int count = 0;
	while (decimalnumber > 0)
	{
		res += decimalnumber % 2 * pow(10, count);
		decimalnumber = decimalnumber / 2;
		count++;
	}
	return res;
}
int decimalnumber(int binarynumber)
{
	float res=0;
	int count = 0;
	while (binarynumber > 0)
	{
		res += binarynumber % 10 * pow(2, count);
		binarynumber = binarynumber / 10;
		count++;
	}
	return res;
}
int main()
{
	float x;
	float y;
	printf(" \ninput decimalnumber=");
	scanf_s("%f", &x);
	printf("\nbin=%d", binarynumber(x));
	printf("\ninput bin=");
	scanf_s("%f", &y);
	printf("\ndeci=%d", decimalnumber(y));
}*/
void hex(int decimal)
{
	char hex[100];
	int i=0;
	while (decimal > 0)
	{
		int temp;
		temp = decimal % 16;
		if (temp < 10)
		{
			hex[i] = temp + 48;
			i++;
		}
		else
		{
			hex[i] = temp + 55;
			i++;
		}
		decimal /= 16;
	}
	for (int j = i - 1;j >= 0;j--)
		printf("%c", hex[j]);

}
int deci(char hex)
{
	int n;
	int sum = 0;
	int  count = 0;
	printf("nhap hex=");
	scanf_s("%c", &hex);
	while (hex > 0)
	{
		sum += (hex % 10 * pow(16, count));
		hex = hex / 10;
			count++;
	}
	
}
int main()
{
	int n = 2545;
	hex(n);
}
