#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct so_phuc
{
	int thuc;
	int ao;
}sp;
void nhap_mang(sp arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i].thuc);
		scanf_s("%d", &arr[i].ao);
	}
}
sp tong_so_phuc(sp arr[], int n)
{
	sp a;
	a.thuc = 0;
	a.ao = 0;
	for (int i = 0;i < n;i++)
	{
		a.thuc += arr[i].thuc;
	}
	for (int i = 0;i < n;i++)
	{
		a.ao += arr[i].ao;
	}
	return a;
}
sp tich_so_phuc(sp arr[], int n)
{
	sp a;
	a.thuc = 0;
	a.ao = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;j++)
		{

		}
	}

}
int main()
{
	int n;
	sp arr[100];
	printf("nhap n=");
	scanf_s("%d", &n);
	nhap_mang(arr, n);
	sp a;
	a = tong_so_phuc(arr, n);
	printf("%d %d! ", a.thuc, a.ao);
}