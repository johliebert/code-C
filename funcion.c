#include<stdio.h>
#include<math.h>
//c1
/*int max(int a, int b,int c)
{
	int max=(a > b) ? a : b;
	  max= ( max > c) ? max : c;
	 return max;
}				
int min (int a, int b,int c)

{				
	return (a < c && a < b) ? a : (b < c) ? b : c;
}

int main()
{
	int a, b, c;
	printf("input three number:");
	scanf_s("%d %d %d ", &a , &b, &c);
	printf(" max of three number is %d ", max(a, b, c));
	printf(" max of three number is %d ", min(a, b, c));*/	

//c2
//int max1(int a, int b)
//{
//	return (a > b) ? a : b;
//}
//int max2(int a, int b , int c)
//{
//	return max1(max1(a, b), c);
//}
//int min1(int a, int b)
//{
//	return (a < b) ? a : b;
//}
//int min2(int a, int b, int c)
//{
//	return min1(min1(a, b), c);
//}
//int main()
//{
//	int a, b, c;
//	printf("input three number:");
//	scanf_s("%d %d %d ", &a, &b, &c);
//	printf(" max of three number is %d ", max2(a, b, c));
//	printf(" max of three number is %d ", min2(a, b, c));
//}//okeee
//void print(int time)
//{
//	for (int i = 0;i < time;i++)
//	{
//		printf("co len!");
//	}
//}
//void division (int number)
//{
//	for (int i = 1;i <= number;i++)
//	{
//			printf( " %d ", i);
//	}
//}
//int main()
//{
//	int a ;
//	printf("nhap so");
//	scanf_s(" %d ", &a);
//	printf(" liet ke la \n " );
//	
//	division(a);
//lam binh thuong 
//int  sum(int n)
//{
//	int res = 0;
//	for ( int a = 1;a <= n;a++)
//	{
//		res += a;
//	}
//	return res;
//}
// ham de quy 
/*int sumrecursion(int n)
{
	 sum=1+.....+n 
	if (n == 0)
		return 0;
	else
		return n + sumrecursion(n - 1);
}
int main()
{
	int   n;
	printf(" nhap n ");
	scanf_s("%d", &n);
	int Sum = sum(n);
	printf("%d", Sum);
	int Sumrecursion = sumrecursion(n);
	printf("%d", Sumrecursion);
}*/
//tim so dao nguoc su dung ham
int reverse(int n)
{
	int temp;
	int renumber = 0;

	while (n > 0) {
	
		temp = n % 10;
		renumber = renumber * 10 + temp;
		n = n / 10;
	}
	return renumber;
}
int main()
{
	int n;
	printf("nhap so n = ");
	scanf_s(" %d ", &n);
	int final = reverse(n);
	printf(" %d ", final);
}