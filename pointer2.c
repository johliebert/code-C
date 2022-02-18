#include<stdio.h>
int main()
{
	/*int arr[] = { 1,2,3,4,5 };
	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		printf("dia chi cua arr[%d]=%d\n", i, &arr[i]);
	}
	int* p = arr;
		printf("gia tri cua p=%d\n", p);
		printf("gia tri ma p tro toi %d\n", *p);
		p++;*/
	//cách tang gia tri dia chi ma con tro dang tro toi
	/*(*p) += 5;*/
	/*printf("gia tri ma p dang tro toi %d\n", *p);*/
	int arr[100];
	int n;
	do
	{
		printf("input n=");
		scanf_s("%d", &n);
	} while (n < 1);
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", (arr+i));
	}
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]=%d\n", i,*(arr+i));
	}
	int sum = 0;
	for (int* i = arr;i <= &arr[n - 1];i++)
	{
		sum += *i;
	}
	printf("sum=%d\n", sum);
}