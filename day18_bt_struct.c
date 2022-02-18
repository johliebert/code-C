#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct toado
{
	int x;
	int y;
}td;
int giaithua(int n)
{
	if (n == 1)
		return 1;
	return n * giaithua(n - 1);
}
int so_tamgiac(int n)
{
	int tu = giaithua(n);
	int mau = giaithua(3) * giaithua(n - 3);
	return tu / mau;
}
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void nhap_mang(td arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i].x);
		scanf_s("%d", &arr[i].y);
	}
}
float do_dai(td a, td b)
{
	return sqrt(pow(a.x - b.x, 2) + (a.y - b.y, 2));
}
float chu_vi(float a, float b, float c)
{
	return (a + b + c) / 2;
}
float area(float a, float b, float c)
{
	float p = chu_vi(a, b, c);
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
float large_area(int  arr[],int n,float a, float b, float c)
{
	for (int i = 0;i < n;i++)
	{
		arr[i] = area(a, b, c);
	}
}

int main()
{
	int n;
	td arr[100];
	printf("input n=");
	scanf_s("%d", &n);
	nhap_mang(arr, n);

}

