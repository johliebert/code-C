#include<stdio.h>
#include<math.h>
typedef struct duong_tron
{
	struct tam
	{
		int x;
		int y;
	};
	float bk;
}DT;
DT input()
{
	DT dt;
	printf("\nNnhap toa do:");
	scanf_s("%d", &dt.x);
	scanf_s("%d", &dt.y);
	printf("\ntoa do:(%d,%d)", dt.x, dt.y);
	printf("\nnhap ban kinh:");
	scanf_s("%f", &dt.bk);
	printf("R=%f", dt.bk);
	return dt;
 }
float chuvi(DT dt)
{
	return dt.bk * 2 * 3.14;
}
float dientich(DT dt)
{
	return pow(dt.bk, 2) * 3.14;
}
int main ()
{
	DT dt2;
	dt2 = input();
	printf("\nchu vi la %f",chuvi(dt2));
	printf("\ndien tich la %f", dientich(dt2));
}