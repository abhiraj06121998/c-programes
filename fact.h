#include<stdio.h>
main()
{
  int i,fact=1,n;
  printf("\n enter any number=");
  scanf("%d",&n);
  for(i=1,i<=n,i++)
  {
    fact=fact*i;
  }
  printf("\n fact=%d",fact);
}
void add()
{
  int a,b,c;
  printf("\n enter enter the two no=");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("\n addition of two no",c);
}
