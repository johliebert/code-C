#include<stdio.h>
#include<math.h>
int gt(int n)
{
	if (n == 1)
		return 1;
	return n * gt(n - 1);
}
float sinx(float x)
{
	int i = 1;
	float kq = x;
	double temp;
	do
	{
		temp = pow(x, 2 * i + 1) / gt(2 * i + 1);
		kq += pow(-1, i) * temp;
		i++;
	} while ( temp >= 0.001);
	return kq;
}
int main()
{
	float x;
	float a;
	printf("nhap x=");
	scanf_s("%f", &x);
	printf("%f",sinx(x));
}
