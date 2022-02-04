#include<stdio.h>
int input_n()
{
  int x;
  printf("Enter the number till where you want the sum:- ");
  scanf("%d",&x);
  return x;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n, int sum)
{
  for(int i=1;i<=n;i++)
  {
    printf("%d",i);
    if(i!=n)
    {
      printf("+");
    }
  }
  printf(" is %d",sum);
}
int main()
{
  int num,total;
  num=input_n();
  total=sum_n(num);
  output(num,total);
  return 0;
}