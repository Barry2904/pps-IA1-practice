#include<stdio.h>
struct _complex
{
  float real,img;
};
typedef struct _complex Complex;
int get_n()
{
  int x;
  printf("How many complex numbers do you want to add:- ");
  scanf("%d",&x);
  return x;
}
Complex input(int n,Complex c[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Enter the real part (a):- ");
    scanf("%f",&c[i].real);
    printf("Enter the imaginary part (b):- ");
    scanf("%f",&c[i].img);
  }
}
Complex add_n_complex(int n, Complex c[n])
{
  Complex sum;
  int i;
  for(i=0;i<n;i++)
  {
    sum.real=sum.real+c[i].real;
    sum.img=sum.img+c[i].img;
  }
  return sum;
}
void output(int n, Complex c[n], Complex r)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Complex no %d:- %.1f + %.1f i\n",i+1,c[i].real,c[i].img);
  }
  printf("-------------------------------\n");
  printf("\t  Sum is:- %.1f + %.1f i\n",r.real,r.img);
  printf("-------------------------------\n");
}
int main()
{
  int n;
  n=get_n();
  Complex c[n];
  input(n,c);
  Complex sum=add_n_complex(n,c);
  output(n,c,sum);
}


