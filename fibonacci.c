#include<stdio.h>
int main()
{
int i,n,t1=0,t2=1,nextterm=0;
printf("enter the number of terms:");
scanf("%d",&n);
printf("fibonacci series:");
for(i=1;i<=n;++i)
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
nextterm=t1+t2;
t1=t2;
t2=nextterm;
printf("%d",nextterm);
}
}
