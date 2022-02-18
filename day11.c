#include<stdio.h>
#include<math.h>
void inputarray(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
}
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y=temp;
}
void selectionsort(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j =i+ 1;j < n;j++)
		{
			if (arr[i] < arr[j])
				swap(&arr[i], &arr[j]);
		}
	}
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
	inputarray(arr, n);
	selectionsort(arr, n);
	printf("%d", arr[1]);
}