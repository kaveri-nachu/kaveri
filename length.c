#include <stdio.h>
 #define MAX_SIZE 100 
 int main()
{
    char string[MAX_SIZE];
    int i, words;
  i = 0;
    words = 1;
     while(string[i]!='\0')
    {
        if(string[i]==' ' || string[i]=='\n' || string[i]=='\t')
        {
            words++;
        }
        i++;
    }
printf("Total number of words = %d\n", words);
  return 0;
} 
