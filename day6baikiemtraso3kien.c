//#include<stdio.h>
//#include<math.h>
//#include<stdbool.h>
//int max(int a, int b, int c)
//{
//	return (a > b&& a > c) ? a : ((b > c) ? b : c);
//}
//int min(int a, int b, int c)
//{
//	return (a < b&& a < c) ? a : ((b < c) ? b : c);
//}
//bool prime(int n)
//{
//	if (n == 3)
//		return true;
//	if (n <= 1)
//		return false;
//	for (int i = 2;i <= sqrt(n);i++)
//	{
//		if (n % i == 0)
//			return false;
//		else if (n % i != 0)
//			return true;
//	}
//}
//int main()
//{
//	int a, b, c;
//	int i;
//	printf("input a= ");
//	scanf_s("%d", &a);
//	printf("input b= ");
//	scanf_s("%d", &b);
//	printf("input c= ");
//	scanf_s("%d", &c);
////cau1
//	for (i = max(a, b, c);i >= min(a, b, c);i--)
//	{
//		if (i % 3 == 0)
//		{
//			printf("\nso lon nhat chia het cho 3 la %d", i);
//			break;
//		}
//	}
//	for (i = min(a, b, c);i <= max(a, b, c);i++)
//	{
//		if (prime(i))
//		{
//			printf("\nso nguyen to nho nhat la %d", i);
//			break;
//		}
//	}
//}
// T=(1!+2!+...(1+2..+n))/n!
#include<stdio.h>
#include<math.h>
int tu(int n)
{
	float Sum = 0;
	int res1 = 3;
	for (int i = 3;i <= n + 1;i++)
	{
		Sum += mau(res1);
		res1 += i;
	}
	return Sum;
}
int mau(int n)
{
	if (n == 1)
		return 1;
	return n * mau(n - 1);
}
int main()
{
	int n;
	printf("nhap n=");
	scanf_s("%d", &n);
	double	kq = (1.0 + 2 + tu(n)) / mau(n);
	printf("%lf", kq);
}

