#include<stdio.h>
int main()
{
    int a=10,b=20,temp;
    {
        temp=a;
        a=b;
        b=temp;
    }
      printf("the a value is%d",a);
      printf("the b value is%d",b);
    }
