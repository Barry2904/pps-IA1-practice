#include<stdio.h>
int input_array_size()
{
  int x;
  printf("How many numbers do you wish to add:- ");
  scanf("%d",&x);
  return x;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("Enter %dth number:- ",i);
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n, int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  for(int i=0;i<n;i++)
  {
    printf("%d",a[i]);
    if(i!=n-1)
    {
      printf("+");
    }
  }
  printf(" is %d",sum);
}
int main()
{
  int n,result;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  result=sum_n_arrays(n,a);
  out_put(n,a,result);
  return 0;
}