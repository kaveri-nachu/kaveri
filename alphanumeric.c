#include <stdio.h>
 #define MAX_SIZE 100
 int main()
{
    char string[MAX_SIZE];
    int alphabets, digits, others, i;
 alphabets = digits = others = i = 0;
 printf("Enter any string : ");
    gets(string);
     while(string[i]!='\0')
     {
     if((string[i]>='a' && string [i]<='z')|| (string [i]>='A' && string[i]<='z'))
     {
     alphabets ++;
     }
     else if(string[i]>='0' && string[i]<='9')
     {
     digits ++;
     }
     else
     {
     others++;
     }
     i++;
     }
     }
     