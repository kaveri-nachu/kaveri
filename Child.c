#include<stdio.h>
int main()
{
int a[10],i,b=0;
clrscr();
printf("The rating of the children is equal to the number of candies\nThe ratings begins from 1 to n \nEnter the rating for 10  children: ");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
i=0;
while(a[i]!=0&&i<=9)
{
for(i=0;i<=9;i++)
{
b=b+a[i];
}
}
printf("The minimum no of candies is= %d",b);
return 0;
}
