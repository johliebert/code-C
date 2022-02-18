
//{
//	int number = 1;
//	while (number <= 10)
//	{
//		if (number % 2 != 0)
//		{
//			printf("%d la so le\n", number);
//		}
//		number++;
//	}
//}
//{
//	int a;
//	do
//	{
//		printf("nhap a =");
//		scanf_s("%d", &a);
//	} 
//	while (a<1);
//	{
//		printf ("a=%d ", a);
//	}		
//}
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    /*while (i <= 6)
    {
        s += i;
        i += 2;
    }
    printf("%d",s);*/
    //bài 11 /55
   /*int  day, nextday;
    printf("nhap ngay:");
    scanf_s("%d", &day);
    for (nextday = 1;nextday <= 31;nextday++)
    {
        if ((nextday + day) <= 31)
            printf(" ngay hop le ke tiep la :%d\n", nextday + day);

    }*/
    //bài 12 /55
  /*int day, next;
    printf(" nhap ngay:");
    scanf_s("%d", &day);
    if (day <= 31 && day >= 1)
        next =  day-1 ;
        printf("ngay truoc do la:%d", next);
        */
    //bài 20/55
    /* int a, b, sum = 0;
          printf("nhap ");
          scanf_s("%d", &a);

          for (b = 1;b < a;b++)
          {
              if (a % b == 0)
              {
                  sum +=b;
              }
          }
          printf("tong cac uoc la %d\n", sum);
          if (sum <= a)
          {
              printf("%d la so hoan hao\n", a);
          }
          else
              printf("%d khong la so hoan hao\n", a);
      }*/
    //bài 15/55
  /*int a ,sum=0,minus=0;
    printf(" nhap a:");
    scanf_s("%d", &a);
    while (a >1)
    {
        if (a % 2 == 0)
        {
            sum += a;
        }
        a--;
        if (a % 2 != 0)
        {
            minus += a;

        }
        a--;
    }
    printf(" tong cac so chan la %d\n", sum);
    printf(" tong cac so le la %d\n", minus);*/
 //c2 
  /*  int i, sum=0, min=0;
    for ( i = 2;i < 10;i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        
    }
    printf("%d", sum);*/// vong lap for dùng khi biết chính xác số lần lặp 
 //bai 16
    float  n,s=0, s1=0,s3=0,s5=1,s6=0,s7=1,s8=1;
    float s2 = 0;
    float s4 = 0;
    int i;


    do
    {
        printf("\nnhap n:");
        scanf_s("%f", &n);
        if (n <= 0)
        {
            printf("\nban da nhap sai , moi nhap lai");
        }
    } while (n <= 0);
    //a
    for (i = 1;i <= n;i++)
    {
       s1=s1+ i;
    }   
    printf("\n s1= %f", s1/n);
    //b
   /*for (i = 1;i <= n;i++)
   {
       s2 =( s2 + i * i);
   }
   sqrt(s2);

       printf("\n s2 = %f", sqrt( s2));*/
    //c
    /*for (i = 0;i <= n;i++)
    {
        s3 = s3 + pow((2 * i + 1),2);
    }
    printf("%f", s3);*/
    //d
   /* for (i = 1; i <= n; i++)
    {
        s4 = s4 + (pow(-1, (i - 1)) / pow(2 * i, 2)) ;
    }
    printf("%f", s4);*/
    //e
   /* for (i = 1;i <= n;i++)
    {
        s5 = s5 * ((2 * i - 1) /( 2*i));
    }
    printf("%f", s5);*/
    //f
    /*for (i = 0;i <= n;i++)
    {
        s6 = s6 + (pow(-1, (i - 1))) * (i * (i + 1) * (i + 2));
    }
    printf("%f", s6);*/
    // hì hì
   /* for (i = 1;i <= n;i++)
    {
        if (i % 2 == 0)
        {
            s7 = s7 * i;
        }
        else
        {

            s8 = s8 * i;
        }
     
            
    }
    printf("\n khi n la so chan %f", s7);
    printf("\n khi n la so le %f", s8);*/
}
        