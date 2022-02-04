#include <stdio.h>
int input()
{
  int a;
  printf("Enter a number");
  scanf("%d",&a);
  return a;
}
int find_largest(int a, int b, int c)
{
  if ( a>b && a>c)
    return a;
  else if (b>c )
    return b;
  else
    return c;
}

void output(int a, int b, int c, int largest)
{
  printf("The largest of %d,%d,%d is %d",a,b,c,largest);
}

int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest = find_largest(a,b,c);
  output(a,b,c,largest);
}