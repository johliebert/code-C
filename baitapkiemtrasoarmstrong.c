#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int countdigit(int n)
{
	int count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

bool isarmstrong(int n)
{
	int hats = countdigit(n);
	int temp = 0;
	int number;
	int last=n;
	while ( last > 0)
	{
		number=last % 10;
		temp += pow(number, hats);
		last /= 10;
	}
	if (temp == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n;
	printf("\nnhap n");
	scanf_s("%d", &n);
	printf("\nn=%d", n);
	if (isarmstrong(n) == true)
	{
		printf(" \n%d is armstrong",n);

	}
	if (isarmstrong(n) == false)
	{
		printf("\n%d is not armstrong",n);
	}
}
	

