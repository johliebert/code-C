#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct toado
{
	int x;
	int y;
}td;
td print()
{
	td d;
	printf("moi nhap x:");
	scanf_s("%d", &d.x);
	printf("moi nhap y:");
	scanf_s("%d ", &d.y);
	return d;
}
float dodai(td a,td b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}
float chuvi(float a, float b, float c)
{
	return a + b + c;
}
float dientich(float a, float b, float c)
{
	float cv = chuvi(a, b, c);
	return sqrt(cv * (cv - a) * (cv - b) * (cv - c));
}
void trung(td a, td b)
{
	if (a.x == b.x && a.y == b.y)
		printf("hai diem nay trung nhau ");
}
int main()
{
	td a, b, c;
	a = print();
	b = print();
	c = print();
	float dodai1 = dodai(a, b);
	float dodai2 = dodai(a, c);
	float dodai3 = dodai(b, c);
	printf("do dai la %f", dodai1);
	printf("do dai la %f", dodai2);
	printf("do dai la %f", dodai3);
	float dt = dientich(dodai1, dodai2, dodai3);
	printf("\n%f", dt);
}
