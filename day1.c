#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//bai tap tim so finbonacci
/*int factorials(int fac)
{
	if (fac == 1)
		return 1;
	return fac * factorials(fac - 1);
}
int main()
{
	int n;
	printf(" nhap n=");
	scanf_s("%d", &n);
	printf("factorial of n is %d ", factorials(n));
}
*/
//int fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//int main ()
//{
//	int n;
//	printf("nhap n=");
//	scanf_s("%d", &n);
//	printf("so fibonacci thu %d la %d", n, fibonacci(n));
// }
//int finbonacci(int n)
//{
//	int a1 = 1, a2 = 1;
//	if (n == 1 || n == 2)
//		return 1;
//	int i=3, a;
//	while (i <= n)
//	{
//		a = a1 + a2;
//		a1 = a2;
//		a2 = a;
//		i++;
//	}
//	return a;
//}
//int main()
//{
//	int n;
//	printf("nhap n=");
//	scanf_s("%d", &n);
//	printf("so finbonacci thu %d la %d", n, finbonacci(n));
//}
//viet ham kiem tra so nguyen to
int prime(int n)
{
	int count = 0;
	for (int i = 2;i <= sqrt(n); i++)
	{
		if (n % i == 0)
			count++;
	}
	if (count == 0)
		printf(" %d la so nguyen to", n);
	else
		printf("%d khong la so nguyen to", n);
	return count;
}
int main()
{
	int n;
	printf("nhap so n=");
	scanf_s("%d", &n);
	prime(n);
}


 




