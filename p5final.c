#include<stdio.h>
float input()
{
  float x;
  printf("Enter a number:- ");
  scanf("%f",&x);
  return x;
}
float my_sqrt(float n)
{
  float root,temp=0;
  root=n/2;
  while(root!=temp)
  {
    temp=root;
    root=(n/temp+temp)/2;
  }
  return root;
}
void output(float n,float sqrt)
{
  printf("%.2f is the root of %.2f",sqrt,n);;
}
int main()
{
  float num,sqrt;
  num=input();
  sqrt=my_sqrt(num);
  output(num,sqrt);
  return 0;
}

