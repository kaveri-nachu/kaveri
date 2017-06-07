#include<stdio.h>
int main()
{
char str[100];
int countspecialchar,counter;
count special char=0;
printf("enter a string:");
grts(str);
for(counter=0;str[counter]!=NULL;counter++);
{
if(str[counter]=='others')
countspecialchar++;
}
printf("\n special characters:%d",countspecialchar);
}
