#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum,a1=0,a2=1;
  printf("enter the n value");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d",a1);
    sum=a1+a2;
    a1=a2;
    a2=sum;
  }
  
}
