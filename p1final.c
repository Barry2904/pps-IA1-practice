#include<stdio.h>
void input(int *a,int *b)
{
  printf("Enter the 1st number:- ");
  scanf("%d",a);
  printf("Enter the 2nd number:- ");
  scanf("%d",b);
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("The sum of %d + %d = %d",a,b,sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}