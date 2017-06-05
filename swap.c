#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the no:");
scanf("%d,%d,%d",&a,&b,&c);
temp=c;
c=b;
b=a;
a=temp;
printf("%d,%d,%d",a,b,c);
}
