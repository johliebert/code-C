#include<stdio.h>
#include<math.h>
//bai1
/*int octal(int decimal)
{
	int count = 0;
	int Sum = 0;
	int res;
	while (decimal > 0)
	{
		res=decimal % 8;
		Sum += res * pow(10, count);
		decimal /= 8;
		count++;
	}
	return Sum;
}
int main()
{
	int n;
	printf("input n=");
	scanf_s("%d", &n);
	printf("%d=%d", n, octal(n));
}*/
//bai2
/*void input(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
}
//void output(int arr[], int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
int sumeven(int arr[], int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		if (arr[i] % 2 == 0)
			sum += arr[i];
	}
	return sum;
}
int sumodd(int arr[], int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		if (arr[i] % 2 != 0)
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
	} while (n < 0 || n>100);

	input(arr, n);
	printf("\ntong so le la %d",sumodd(arr, n));
	printf("\ntong so chan la %d",sumeven(arr, n));
}*/
//bai3
void input(int arr[],int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
}
int maxnum(int arr[], int n)
{
	int max = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
int minnum(int arr[], int n)
{
	int min = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int locationmax(int arr[],int n)
{
	int max = maxnum(arr, n);
	int index;
	for (int i = 0;i < n;i++)
	{
		if (arr[i] ==  max)
		{
			index = i+1;
		}
	}
	return index;
}
int main()
{
	int n;
	int arr[100];
	do
	{
		printf("input n=");
		scanf_s("%d", &n);
	} while (n < 0 || n>100);
	input(arr, n);
	printf("\nnum max in array is %d",maxnum(arr, n));
	printf("\nnum min in arr is %d", minnum(arr, n));
	printf("\nlocation num max is %d", locationmax(arr, n));
}