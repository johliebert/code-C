#include<stdio.h>
#include<math.h>
#include<stdbool.h>
// list primenumber
/*void inputarr(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]", i);
		scanf_s("%d", &arr[i]);
	}
}
bool primenumber(int n)
{
	if (n == 2 || n == 3)
		return true;
	for (int i = 2;i < sqrt(n);i++)
	{
		if (n % i == 0)
		{
			return false;
		}
		else
			return true;
	}
}
int countprimenumber(int arr[], int n)
{
	int count = 0;
	for (int i = 0;i < n;i++)
	{
		if (primenumber(arr[i]))
			count++;
	}
	return count;
}
void printfprime(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		if (primenumber(arr[i]))
			printf("%5d", arr[i]);
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
	} while (n < 0 || n>100);
	inputarr(arr, n);
 	int count = countprimenumber(arr, n);
	printf("\nhave %d prime",count);
	if (count > 0)
		printf("\nprime list:");
	printfprime(arr, n);
} */
//thuat toan sap xep nổi bột
/*void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void bubblesort(int arr[], int n)
{
	bool haveswap = false;
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				haveswap = true;
			}
		}
		if (haveswap == false)
			break;
	}
}
void printfarray(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("%5d", arr[i]);
	}
}
int main()
{
	int n;
	int arr[] = { 64,32,53,76,12,13 };
	n = sizeof (arr) / sizeof (arr[0]);
	bubblesort(arr, n);
	printfarray(arr, n);
}*/
//thuat toan sap xep chọn
/*void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void selectionsort(int arr[], int n)
{
	int i,j, min;
	for ( i = 0;i < n - 1;i++)
	{
		min = i;
		for ( j = i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			min = j;
		}
		swap(&arr[min], &arr[i]);
	}
}
void printfarray(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("%5d", arr[i]);
	}
}
int main()
{
	int n;
	int arr[] = { 63,35,42,11,14,22 };
	n = sizeof(arr) / sizeof(arr[0]);
	selectionsort(arr, n);
	printfarray(arr, n);
}*/
// thuat toan sap xep chèn
void insertionsort(int arr[], int n)
{
	int res,j;
	for (int i = 1;i < n;i++)
	{
		res = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > res)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = res;
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionsort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);

}

