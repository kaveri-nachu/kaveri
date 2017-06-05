#include<stdio.h>
void main()
{
int a,fact=1;
printf("\n enter the number:");
scanf("%d",&a);
while(a>=1)
{
prinf("%d*",a);
fact=fact*a;
a--;
}
printf("=%d",fact);
printf("\n factorial of given number is %d",fact);
}
