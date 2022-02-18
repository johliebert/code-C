/*
 1 bien toan cuc
 2 bien cuc bo
 3 bien static ( bien tinh )
*/
//bien toan cuc va bien cuc bo
#include<stdio.h>
#include<math.h>
int g_number = 5;// bien toan cuc
void display(g_number)
{
	int sum;//bien cuc bo
	for(int i=0;i<g_number;i++)
	printf("\nco len!");
}
int main()
{
	display(g_number);
}
//bien static
static int c; // khong can khai bao lai;
void add()
{
	static int c;//chi su dung 1 lan o trong void
}