#include<stdio.h>
#include<math.h>
struct pupils
{
    int studen_id;
    int age;
    char name[30];
    char address[30];
};
typedef struct coordinate
{
    float x;
    float y;
}c;
struct triangle
{
    c A;
    c B; 
    c C;
};
float lenght (x1, x2, y1, y2)
{
    float c;
    c = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return c;
}
int main ()
{
    struct pupils student1, studen2;
    scanf("%s",&student1.name);
    printf("%s\n",student1.name);
    struct triangle abc;
    abc.A.x = 2;
    abc.A.y = 4;
    abc.B.x = 1;
    abc.B.y = 3;
    printf("%f",lenght(abc.A.x, abc.B.x, abc.A.y, abc.B.y));
}