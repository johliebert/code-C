#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
//typedef struct PHANSO
//{
//	float tu;
//	float mau;
//}phanso;
//int UCLN(int a, int b)
//{
//	a = abs(a);
//	b = abs(b);
//	while (a != b)
//	{
//		if (a > b)
//			a = a - b;
//		else
//			b = b - a;
//	}
//	return a;
//}
//phanso rutgon(phanso d)
//{
//	int c = UCLN(d.tu, d.mau);
//	d.tu = d.tu / c;
//	d.mau = d.mau / c;
//	return d;
//}
//int main()
//{
//	phanso a = { 8,4 };
//	 a = rutgon(a);
//	 printf("%f/%f", a.tu, a.mau);
//}
typedef struct Toado
{
	int x;
	int y;
}td;
td printf_td()
{
	td a;
	printf("\nnhap toa do");
	scanf_s("%d", &a.x);
	scanf_s("%d", &a.y);
	printf("\n(%d,%d)",a.x,a.y);
	return a;
}
float dodai(td a,td b)
{
	
	 return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}
int main()
{
	td a;
	td b;
	a = printf_td();
	b = printf_td();
	printf("\n%f", dodai(a, b));
}
