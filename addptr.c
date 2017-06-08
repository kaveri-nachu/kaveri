#include<stdio.h>
int main()
{
int *ptr1,*ptr2;
int num;
printf("\n enter two numbers:");
scanf("%d,%d",ptr1,ptr2);
num=*ptr1+*ptr2;
printf("sum=%d",num);
}
