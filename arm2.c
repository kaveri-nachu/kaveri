#include<stdio.h>
#include<math.h>
int main()
{
int low,high,i,temp1,temp2;
remainder,n=0,result=0;
printf("enter two numbers (intervals):");
scanf("%d,%d"&low,&high);
printf("armstrong numbers between %d and %d are:",low,high);
for(i=low+1;i<high;++i)
{
temp2=i;
temp1=i;
while(temp1!=0)
{
temp1 /=10;
++n;
}
while(temp2!=0)
{
remainder=temp2 % 10;
result +=pow(remainder,n);
temp2 /=10;
}
if(result==i)
{
printf("%d",i);
}
