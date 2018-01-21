#include<stdio.h>
void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    a-=1;
    while(a%2!=0)
    {
        a--;
    }
    printf("%d",a);
    
}
