#include<stdio.h>
int main()
{
int count_char=0;
char str[20];
printf("enter the string");
gets(str);
for(i=0;str[i]!=NULL;i++)
{
count_char++;
}
printf("\n number of characters in a string :%d",count_char);
}
