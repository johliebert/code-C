#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()

    //bài 29 
   //c1 
   /* float n=4, x=1, i,sum=1,c;
     for (i = n - 1;i > 0;i--)
     {
         sum = 1 + x*sum  / i;
         printf("%f\t", sum);
     }
     printf("%f\t", sum);*/
     //c2
      /* double x, a ;
       printf(" nhap x ,a");
       scanf_s(" %lf %lf ", &x, &a);
       double xmuk=1;
       long long  kgiaithua = 1;
       double m = xmuk / kgiaithua;
       int k = 0;
       double sum=0;

         while (m > a)
         {
             sum = sum + m;
             k++;
             kgiaithua *= k;
             xmuk *= x;
             m = xmuk / kgiaithua;
         }
         printf("k=%d\n", k);
         printf("e^%lf=%lf", x, sum);*/
         //bài 30
             /* double a, x;
              printf("nhap a,x: ");
              scanf_s("%lf %lf",&a, &x);
              double sum = 0;
              double xmun = 1;
              double dau = 1;
              int n = 0, k = -1;
              double bieuthuc = dau * (xmun / n);
              double bieuthuc2=abs(xmun / n);
              while (bieuthuc2 > a)
              {
                  xmun *= x;
                  n++;
                  bieuthuc = dau * (xmun / n);
                  sum += bieuthuc;
                  dau *= k;
                  bieuthuc2= abs(xmun / n);
              }
              printf("%d\n", n);
              printf("ln(1+%lf)=%lf", x, sum);*/
              //bài 31
              // maclaurin của lnx là (((x-1)/(x+1))^2n-1)/(2n-1)
              /*double a,x,num, mul, fun,sum=0 , cal;
              int n=1;
              printf("nhap x , a");
              scanf_s("%lf %lf ", &x,&a);
              num = (x - 1) / (x + 1);
              mul = 2 * n - 1;
              cal = pow(num, mul);
              fun = cal / mul;
              while (fun > a)
              {
                  num = (x - 1) / (x + 1);
                  mul = 2 * n - 1;
                  cal = pow(num, mul);
                  fun = cal / mul;
                  sum += fun;
                  n++;
              }
              sum = 2 * sum;
              printf("%d", n);
              printf("ln%lf=%lf", x, sum);*/
              //bài32
              // maclaurin của (1+x)^u
             /* double a, x,u,cal,fun,kq1,kq2;
              printf(" nhap x,u,a ");
              scanf_s("%lf %lf %lf", &x, &u, &a);
              int n=0;
              double num = u * (u - 1) * (u - n + 1);
              cal = num / n;
              fun = cal * x;
              double sum = 0;
              double mu = x * x;
              kq1=(u* x);
              kq2=(u* ((u - 1) *(x* x))) / 2;
              while (abs(cal) * x > a)
              {
                  if (n = 1)
                      sum+=kq1;
                  n++;
                  n *= n;
                  if (n = 2)
                      sum+=kq2;
                  if (n >= 3)
                  {
                      mu *= x;
                  }
                  cal = num / n;
                  fun = cal * x;
                  sum += fun;
                  printf("%lf", sum);
              }
              printf("(1+%lf)^%lf=%lf",x,u, sum);*/
              //chưa hoàn thành
                //bài33
        //tự làm sai
        /* double x, a, dau, mu, tu, mau, fun, fun2;
    int giai;
    printf("nhap x,a");
    scanf_s("%lf %lf", &x, &a);
    int n = 1;
    double sum = 0;
    dau = pow((-1), n);
    mu = 2 * n + 1;
    mau = 2 * n + 1;
    tu = pow(x, (2 * n + 1));
        while ((tu/mau) > a);
        {
            for (giai = mau-1 ;giai > 0;giai--)
            {
                mau *= giai;
                tu = pow(x, (2 * n + 1));
                mau *= giai;
                dau = pow((-1), n);
                fun2 = (tu / mau) * dau;
                sum += fun2;
                n++;
            }
        }
    sum = x - sum;
    printf("sin(% lf)=%lf", x, sum);*/
    //chưa hoàn thành
    //cách 2//
// double x, a;
// printf("nhap x ,a:");
// scanf_s("%lf%lf", &x, &a);*/
// double sum = 0;    
// double fac = 1;
// int i, n=1;
// //double mul = pow(x, (2 * n + 1));
// /*double c = (mul / fac);*/
//
//     for (i = 1;i <= (2*n+1);i++)
//     {
//         n = 1;
//       /*  mul = mul*(-1);*/
//         fac *= i;
//        /* sum += (mul / fac);*/
//         n++;
//         printf("%lf\n", fac);
//    
//       /*  if (fac > 10);
//         break;*/
//         /*printf("c=%lf\t",c);*/
//     }
// printf("sin(%lf)=%lf", x, sum);*/


//bài làm thêm,in ra các thừ số nguyên tố
/* int a;
 int chusodau;
 printf("nhap a:");
 scanf_s("%d", &a);
 do
 {
     a%= 10;

 } while (a > 9);
 printf("%d", a);*/
    /*int a, i, dem;
    printf("nhap a=");
    scanf_s("%d", &a);
    for (i = 2;i <= a;i++)
    {
        dem = 0;
        while (a % i == 0)
        {
            ++dem;
            a /= i;
        }
        if (dem)
        {
            if (dem > 1)
                printf("%d^%d", i, dem);
            else
                printf("%d", i);
            if (a > i)
                printf("*");
        }*/
{
    int i, a, b, c;
    printf(" cac so nguyen co tong bang tich : \n");
    for (i = 100; i <= 999;i++)
    {
        a = i / 100;
        b = (i %100) / 10;
        c = i % 10;
        if ((a * b * c) == (a + b + c))
            printf("%d%d%d\t", a,b,c);
    }
 
}


        












   