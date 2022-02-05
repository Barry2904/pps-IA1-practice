#include<stdio.h>
void input_two_string(char *a,char *b)
{
  printf("Enter 1st string:- ");
  scanf("%s",a);
  printf("Enter 2nd string:- ");
  scanf("%s",b);
}
int strcp(char *a,char *b)
{
  int i;
  for(i=0;a[i]==b[i] && a[i]!='\0';i++)
  {

  }
  return a[i]-b[i];
}
void output(char *a,char *b,int result)
{
  if(result>0)
  {
    printf("%s is Greater than %s",a,b);
  }
  else if(result<0)
  {
    printf("%s is Lesser than %s",a,b);
  }
  else if(result==0)
  {
    printf("%s is Equal to %s",a,b);
  }
}
int main()
{
  char a[30],b[30];
  int result;
  input_two_string(a,b);
  result=strcp(a,b);
  output(a,b,result);
  return 0;
}