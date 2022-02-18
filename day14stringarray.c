#include<stdio.h>
#include<math.h>
#include<string.h>
int countword(char std[],int length)
{
	int word = (std[0] != ' ');
	for (int i = 0;i < length;i++)
	{
		if (std[i] == ' '&&std[i+1]!=' ')
		{
			word++;
		}
	}
	return word;
}
void correct(char std[], int length)
{
	int first = 0, last = length - 1;
	for (int i = first + 1;i < last;i++)
	{
		while (std[first] == ' ' && first < last)//xoa khoang trang o dau chuoi
			first++;
		while (std[last] == ' ' && last > first)//xoa khoang trang o cuoi chuoi
			last--;
		if (std[first] >= 'a' && std[first] <= 'z')
			std[first] -= 32;
		if (std[i] >= 'A' && std[i] <= 'Z')
			std[i] += 32;
		printf("%c", std[i]);
	}
}
int main()
{
	 char s[100];
	 printf("input str=");
	 fgets(s, 100, stdin);
	 int length = strlen(s);
	 correct(s, length);
}