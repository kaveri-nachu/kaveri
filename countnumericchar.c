#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("enter an integer:");
scanf("%11d",&n);
while(n!=0)
{
n/=10;
++ count;
}
printf("number of numerical character:"%d",count);
}
