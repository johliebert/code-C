#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
/*char* deletestr(char* a, char chr, char* b)
{
    int i;
    int j = 0;
    for (i = 0; a[i] !='\0'; i++)
    {
        if (a[i] != chr)
        {
            b[j] = a[i];//[0(q)|1(u)|2(  )|3|4|5|6|7]
            j++;
        }
    }
    b[j] = '\0';
    return b;
}

int main(void) {
    char a[50] = "que huong la chum khe ngot ";
    char b[50];
    char chr = 'u'; 
    puts(deletestr(a, chr, b));
    return 0;
}*/
int main()
{
	char s[] = " que huong la chum khe ngot ";
	int len = strlen(s);
    printf("%d", len);
	for (int i = 0;i < len;i++)
	{
		if (s[i] == 'e')
		{
			for (int j = i;j < len;j++)
			{
				s[j] = s[j + 1];
			}
		}
	}
	printf("%s", s);
}
