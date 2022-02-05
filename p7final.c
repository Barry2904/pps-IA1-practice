#include<stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef struct _complex Complex;

Complex input()
{
  Complex n;
  printf("Enter the real part (a):- ");
  scanf("%f",&n.real);
  printf("Enter the imaginary part (b):- ");
  scanf("%f",&n.imaginary);
  return n;
}
Complex add(Complex a,Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
void output(Complex a, Complex b, Complex c)
{
  printf("(%.2f+%.2fi) + (%.2f+%.2fi) = (%.2f+%.2fi)",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex a=input();
  Complex b=input();
  Complex c=add(a,b);
  output(a,b,c);
  return 0;
}