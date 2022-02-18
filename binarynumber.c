#include<stdio.h>
#include<math.h>

int decimalnumbers(int decimalnumber)
{
	int binarynumber = 0;
	int hats = 0;
	while (decimalnumber > 0)
	{
		binarynumber += (decimalnumber % 2) * pow(10, hats);
		hats++;
		decimalnumber /= 2;
	}
	return binarynumber;
}
int main()
{
	int decnumber;
	printf("input decnumber=");
	scanf_s ("%d", &decnumber);
	printf("Bin=%d", decimalnumbers(decnumber));
}