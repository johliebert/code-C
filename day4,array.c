#include<stdio.h>
#include<math.h>
#include<conio.h>
void inputarr(int arr[],int n )
{
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d",&arr[i]);
	}
}
void outputarr(int arr[], int n)
{
	for (int i = n - 1;i >= 0;i--)
	{
		printf("\narr[%d]=%d", i, arr[i]);
	}
}
int main()
{
	int n;
	int arr[1001];
	do
	{
		printf("input n=");
		scanf_s("%d", &n);
		if (n <= 0 || n > 100)
		{
			printf("sorry pls input  again ,n=");
		}
	} while (n <= 0 || n > 100);
	inputarr(arr, n);
	outputarr(arr, n);
}