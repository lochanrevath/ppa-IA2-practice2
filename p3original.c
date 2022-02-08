#include<stdio.h>
int input()
{
  int n;
  printf("enter the number to find\n");
  scanf("%d",&n);
  return n;
}
int comp(int n)
{
  int count=0;
  for(int i=1;i<=n;++i)
  {
    if(n%i==0)
    count ++;
  }
  return count;
}
void output(int count)
{
  if(count>2)
  printf("it is a composite number");
  else if(count==2)
  printf("it is not a composite number");
}
int main()
{
  int n, count;
  n=input();
  count=comp(n);
  output(count);
  return 0;

}