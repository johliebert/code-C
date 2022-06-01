#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int common_divisor (int a, int b)
{
    a = abs(a);
    b = abs(b);
    while(a * b != 0)
    {
        if(a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}
int common_multiple (int a, int b)
{
    return a * b / common_divisor(a, b);
}
typedef struct fraction
{
    int numerator;
    int denominator;
}frt;
frt reduce (frt a)
{
    frt c;
    c.numerator = a.numerator / common_divisor(a.numerator, a.denominator);
    c.denominator = a.denominator / common_divisor(a.numerator, a.denominator);
    return c; 
}
frt addition (frt a, frt b)
{
    frt c; 
    c.numerator = (a.numerator * b.denominator) + (b.numerator * a.denominator);
    c.denominator = a.denominator * b.denominator;
    c = reduce (c);
    return c;
}
frt division (frt a, frt b)
{
    frt c; 
    c.numerator = a.numerator * b.denominator;
    c.denominator = a.denominator * b.numerator;
    c = reduce (c);
    return c;
}
frt multiplication (frt a, frt b)
{
    frt c; 
    c.numerator = a.numerator * b.numerator;
    c.denominator = a.denominator * b.denominator;
    c = reduce (c);
    return c;
}
frt subtraction (frt a, frt b)
{
    frt c; 
    c.numerator = (a.numerator * b.denominator) - (b.numerator * a.denominator);
    c.denominator = a.denominator * b.denominator;
    c = reduce (c);
    return c;
}
int main ()
{
    frt a, b, ans;
    a.numerator = 12;
    a.denominator = 30;
    b.numerator = 13;
    b.denominator = 23;
    ans = addition (a, b);
    printf("%d/%d\n",ans.numerator, ans.denominator);
    ans = subtraction (a, b);
    printf("%d/%d\n",ans.numerator, ans.denominator);
    ans = division (a, b);
    printf("%d/%d\n",ans.numerator, ans.denominator);
    ans = multiplication (a, b);
    printf("%d/%d\n",ans.numerator, ans.denominator);
}