#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct phanso
{
	int tu;
	int mau;
}ps;
int min(int a, int b)
{
	return a < b ? a : b;
}
ps reduce(ps c)
{
	int ucln = 1;
	for (int i = min(c.tu, c.mau);i >= 1;i--)
	{
		if (c.tu % i == 0 && c.mau % i == 0)
		{
			ucln = i;
			break;
		}
	}
	c.tu = c.tu /ucln ;
	c.mau = c.mau / ucln;
	return c;
}
ps cong(ps a, ps b)
{
	ps c;
	c.tu = a.tu * b.mau + a.mau * b.tu;
	c.mau = a.mau * a.mau;
	c = reduce(c);
	return c;
}
ps hieu(ps a, ps b)
{
	ps c;
	c.tu = a.tu * b.mau - a.mau * b.tu;
	c.mau = a.mau * a.mau;
	c = reduce(c);
	return c;
}
ps tich(ps a, ps b)
{
	ps c;
	c.tu = a.tu * b.tu;
	c.mau = a.mau * b.mau;
	c = reduce(c);
	return c;
}
ps thuong(ps a, ps b)
{
	ps c;
	c.tu = a.tu * b.mau;
	c.mau = a.mau * b.tu;
	c = reduce(c);
	return c;
}
void print(ps c)
{
	printf("\n%d/%d", c.tu, c.mau);
}
int main()
{
	ps a, b, c;
	printf("\nnhap so a");
	scanf_s("\n%d%d", &a.tu, &a.mau);
	print(a);
	printf("\nnhap so b");
	scanf_s("\n%d%d", &b.tu, &b.mau);
	print(b);
	c = cong(a, b);
	print(c);
	c = hieu(a, b);
	print(c);
	c = tich(a, b);
	print(c);
	c = thuong(a, b);
	print(c);

}