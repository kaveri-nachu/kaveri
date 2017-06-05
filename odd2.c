#include<stdio.h>
int main()
{
int rem,i;
printf("\n the odd numbers between 1 and 100 are \n");
for(i=1;i<=100;i++)
{
rem=i%2;
if(rem!=0)
printf("\n %d",i);
}
}
