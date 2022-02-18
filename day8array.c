#include<stdio.h>
#include<math.h>
void input(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]", i);
		scanf_s("%d", &arr[i]);
	}
}
int increase(int arr[], int n)
{
	int res;
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (arr[i] < arr[j])
			{
				res = arr[i];
				arr[i] = arr[j];
				arr[j] = res;
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		printf("%5d", arr[i]);
	}
}
int reduce(int arr[], int n)
{
	int res;
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (arr[i] > arr[j])
			{
				res = arr[i];
				arr[i] = arr[j];// i=3,j=2 //res=i=3 , i=j=>i=2;j=res

				arr[j] = res;
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		printf("%5d", arr[i]);
	}
}
int main()
{
	int arr[100];
	int n;
	do
	{
		printf("input n=");
		scanf_s("%d", &n);
	} while (n < 0 || n>100);
	input(arr, n);
	reduce(arr, n);
	increase(arr, n);
}