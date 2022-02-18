#include<stdio.h>
#include<math.h>
int main ()
{
	int number;
	printf("input number =");
	scanf_s("%d", &number);
	printf("number=%d\n", number);
	printf("%d\n", &number);
	int* p=number;
	printf("%d\n", &p);
	number = 2;
	printf("%d\n", number);
	int* t = &number;
	*t = 10;
	printf("%d\n", number);
	printf("%d\n", *t);
	int arr[5] = { number,2,3,4,5 };
	printf("%d", &arr[0]);


}