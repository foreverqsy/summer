#include <stdio.h>
int main()
{
 int i,j,a;
 for(i=2;i<=1000;i++)
 {
  a=0;
  for(j=2;i>j;j++)
  if(i%j==0) { a=1;break; }
  if(a==0) printf("%d ",i);
 }
}
