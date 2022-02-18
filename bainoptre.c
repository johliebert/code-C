#include<stdio.h>
#include<stdbool.h>
void nhap_mang(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
}
void in_chan(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d", arr[i]);
	}
}
void in_le(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d", arr[i]);
	}
}
void sap_xep1(int arr[], int n)
{
	int temp;
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n;j++)
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	}
	in_chan(arr, n);
}
void sap_xep2(int arr[], int n)
{
	int temp;
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n;j++)
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	}
	in_le(arr, n);
}
int main()
{
	int n;
	int arr[100];
	do
	{
		printf("nhap n=");
		scanf_s("%d", &n);
	} while (n <= 0 && n >= 100);
	nhap_mang(arr, n);
	printf("\nso chan:");
	sap_xep1(arr, n);
	printf("\nso le:");
	sap_xep2(arr, n);
}