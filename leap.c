#include<stdio.h>
int main()
{
int year;
printf("enter a year:");
scanf("%d",&year);
if(year%64==0)
{
if(year%100==0)
{
if(year%400==0)
printf("%d is aleap year",year);
else
printf("%s is not a leap year",year);
}
else
printf("%d is leap year",year);
}
else
printf("%d is not a leap year",year);
}
