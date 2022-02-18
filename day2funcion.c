#include<stdio.h>
#include<math.h>
#include<stdbool.h>


float fac(float n)
{
	if (n == 1 )
		return 1;
	return n * fac(n - 1);
}
float fac1 (float k)
{

	if (k == 1)
		return 1;
	return k *( fac1(k - 1)) ;
}
float fac2(float k, int n)
{
	int c = n-k;
	if (n == 1 || k == 1)
		return 1;
	return (n - k) *(c - 1);
}
int main()
{
	int n, k;
	printf("nhap n,k=");
	scanf_s("%d %d ", &n, &k);
	printf("n=%d\nk=%d", n, k);
	printf("gia tri bieu thuc=%f", fac(n) / (fac1(k) * fac2(k, n)));
}
