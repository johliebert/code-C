#include<stdio.h>
#include<math.h>
#include<stdbool.h>
/*
void inputarr(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
}
int number(int arr[], int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		if (arr[i] % 10 == 6 && arr[i] % 6 == 0)
		{
			sum += arr[i];
		}
	}
	return sum;
}
int number1(int arr[], int n)
{
	int res = 0;
	for (int i = 0;i < n;i++)
	{
		int sum = 0;
		for (int j = 1;j < arr[i];j++)
		{
			if (arr[i] % j == 0)
				sum += j;
		}
		if (sum == arr[i])
		{
			res += arr[i];
		}
	}
	return res;
}
int prime( int n)
{
	if (n < 2)
	{
		return false;
	}
	if (n == 2 && n == 3)
		return true;
	for (int j = 2;j <=sqrt(n);j++)
	{
			if (n % j == 0)
				return false;
	}
	return true;
}
int sumprime(int arr[], int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		if (prime(arr[i]))
		{
			sum += arr[i];
		}
	}
	return sum;
}
bool symmetrical(int n)
{
	int res2 = n;
	int res = 0;
	int res1;
	if (n > 0 && n <= 9)
		return true;
	while (res2 > 0)
	{
		res1 = res2 % 10;
		res = res*10 + res1;
		res2 /= 10;
	}
	if (res == n)
		return true;
	return false;
}
int sumsym(int arr[], int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		if (symmetrical(arr[i]))
			sum += arr[i];
	}
	return sum;
}
int main()
{
	int n;
	int arr[100];
	do
	{
		printf("input n=");
		scanf_s("%d", &n);
	} while (n < 0 || n >= 100);
	inputarr(arr, n);
	printf("\nS=%d",number(arr, n));
	printf("\ns=%d",number1(arr, n));
	printf("\ns=%d", sumprime(arr, n));
	printf("\ns=%d", sumsym(arr, n));
}*/
const int Max = 10;
int cnt[10];
int main()
{
	int arr[] = {1,2,2,1,3,5,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < Max; i++)
		cnt[i] = 0;
	for (int i = 0; i < n;i++)
	{
		cnt[arr[i]]++;
	}
	for (int i = 0;i < Max;i++)
	{
		if (cnt[i] > 0)
		{
			printf("%d(%d)\n", i, cnt[i]);
		}
	}
}



