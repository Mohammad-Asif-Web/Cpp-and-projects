#include <stdio.h>

int main()
{
int a = 4;
float b = 2.4;
char c = 'u';
int d = a + 10; //14
int e = d / 2;  //7
int f = e - 2;  //5
int g = f * 5;  //25

printf("this is integer file a: %d\n", a); //int used for integer variables
printf("this is float file b: %f\n", b); //float used for real variables
printf("this is character file c: %c\n\n", c);  //char used for character variables

printf("the value of d is %d\n", d);
printf("the value of e is %d\n", e);
printf("the value of f is %d\n", f);
printf("the value of g is %d\n\n", g);

printf("the addition of a and g is %d\n", a+g);
printf("the substraction of d and e is %d\n", d-e);
printf("the multiplication of e and f is %d\n", e*f);
printf("the division of g and f is %d\n", g/f);

return 0;
}
