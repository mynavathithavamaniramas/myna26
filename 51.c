#include<stdio.h>
#include<conio.h>
void main()
{
    int a=123,n,sum=0;
    while(a<=0)
    {
        n=a%10;
        sum=sum+n;
        printf("%d",sum)
    }
}



