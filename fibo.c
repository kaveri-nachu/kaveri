#include<stdio.h>
int main()
{
inti,n,t1=0,t2=1,next term=0;
printf("enter the number of terms:");
scanf("%d",&n);
printf("fibonacci series:");
for(i=1;i<=n;i++)
{
if(i==1)
{
printf("%d",t1);
}
continue;
if(i==2)
{
printf("%d",t2);
continue;
}
next term=t1+t2;
t1=t2;
t2=next term;
printf("%d",next term);
}
}
