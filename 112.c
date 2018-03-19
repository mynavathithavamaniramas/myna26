#include<stdio.h>
int main()
{
    int a[10],i,n,k;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the k value");
    scanf("%d",&k);
     printf("enter the array value");
    for(i=0;i<6;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        if(a[i]==k)
        printf("%d",a[i]);
    }
}










