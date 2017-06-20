#include<stdio.h>
#include <string.h>
void main()
{
 char st1[25],st2[25];
 int cnt,i,j,k,c,len,m,sign;
 printf("Enter the first string\n");
gets(st1);
printf("Enter the second string\n");
gets(st2);
len=strlen(st1);
for(i=0;i<len;i++)
{
 c=0;
 if (st1[i]==st2[c])
 {
  m=i;
  sign=0;
  cnt=0;
  while(st2[c]!='\0' && sign!=1)
 {
    if (st1[m]==st2[c])
    {
     m++;c++;
     cnt++;
    }
    else
    sign=1;
   }
   if (sign==0)
   {
    printf("The given string is present\n");
    printf("The starting position %d & ending position %d\n",i+1,(i+cnt));
    k=1;
   }
 }
}
if (k != 1)
if (sign!=0)
printf("The given string is not present\n");
}
 
