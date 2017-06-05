#include<stdio.h>
int main()
{
int num,remainder,original number,result=0;
printf("enter an integer number:");
scanf("%d",&num);
original number=number;
while(original !=0)
{
remainder=original number%10;
result+=remainder*remainder*remainder;
original number/10;
}
if(result==number)
printf("%d is an armstrong number",number);
else
printf("%d is not an armstrong number",);
return 0;
}
