#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("enter a num:");
scanf("%d",&num);
if (num<0)
printf("you entered a negative num:");
else if (num>0)
printf("you entered a positive num:");
else
printf("you entered zero");
return 0;
}
