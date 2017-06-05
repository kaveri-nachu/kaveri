#include<stdio.h>
#include<ctype.h>
int main()
char c;
int is lowercasevowel,is uppercasevowel;
do
{
printf("enter an alphabet:");
scanf("%C",&c);
}
while (!isalpha(C));
{
is lowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
is uppercasevowel=(c=='A'||c=='E'||c=='I'||c=='O'||C=='U');
if(is lowercasevowel|| is uppercasevowel)
printf("%c is a vowel",c);
else
printf("%c is a consonant",c);
}
