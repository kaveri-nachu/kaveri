#include<stdio.h>
int main()
{
char ch;
unsigned int long line count;
line count=0;
while((ch getc(stdin))!=EOF)
{
if(ch=='\n')
{
++line count;
}
}
printf("number of lines=%d\n",line count);
}
