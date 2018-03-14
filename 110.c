#include<stdio.h>
int main()
{
int sum=0,i,a[5];
printf("enter the array value")
for(i=0;i<4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
}
