#include<stdio.h>
int main()
{
int i,j,a[10];
printf("enter the array value");
for(i=0;i<6;i++)
{
sacnf("%d",&a[i]);
}
j=a[0];
for(i=1;i<6;i++)
{
if(a[i]<j)
{
j=a[i];
}
}
pritf(the smallest value is%d",j);
}
