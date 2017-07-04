#include<stdio.h>
int main()
{
char word[1000];
int con,i,len;
scanf("%s",word);
scanf("%d",&con);
len=strlen(word);
for(i=0;i<len;i++)
{ if(i==0)
{
printf("%c",word[0]);
}
else
if(i%con!=0)
{
printf("%c",word[i]);
}
}
return 0;
}
