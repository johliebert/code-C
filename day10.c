#include<stdio.h>
#include<math.h>
int search(int arr[], int l, int r, int x)
{
	if (r > 1)
	{
		int mid = (l +(r)) / 2;//<=> (r+1)/2 tránh tràn số

		if (arr[mid] == x)
		{
			return mid;
		}
		if (arr[mid] > x)// vi day la gia tri tang dan
		{
			return search(arr, l, mid - 1, x);
		}
		else if (arr[mid]<x)
		{
			return search(arr, mid + 1,r, x);
		}
	}
	return -1;
}
int main()
{
	int l = 0;
	int n;
	int arr[] = { 3,4,6,10,11,15,17,22,23,24 };
	n = sizeof(arr) / sizeof(arr[0]);
	int x = 22;
	int count =search(arr, l, n, x);
	printf("xuat hien tai so thu %d", count);
}
