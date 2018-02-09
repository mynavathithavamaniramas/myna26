#include <stdio.h>
#include <string.h>
void main()
{
str s[200];
int count = 0, i;
printf("enter the chracter");
scanf("%^s", s);
for (i = 0;s[i] != '0';i++)
{
    if (s[i] == ' ')
 count++;    
}
printf("number of words in given string are: %d", count + 1);
}
