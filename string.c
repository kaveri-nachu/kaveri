#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 
 int countOccurrences(char * string, char * toSearch);
 int main()
{
    char string[MAX_SIZE];
    char toSearch[MAX_SIZE];
    int occurrences;
     printf("Enter any string: ");
    gets(string);
    printf("Enter word to search occurrences: ");
    gets(toSearch);
     occurrences = countOccurrences(string, toSearch);
     printf("Total occurrences of '%s': %d\n", toSearch, occurrences);
     return 0;
}
 int countOccurrences(char * string, char * toSearch)
{
    int i, j, found, occurrences;
    int stringLen, searchLen;
     stringLen = strlen(string); //Gets, length of string
    searchLen = strlen(toSearch); //Gets, length of word to be searched
     occurrences = 0;
  for(i=0; i<=stringLen - searchLen; i++)
    {
               found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(string[i+j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }
  if(found == 1)
        {
            occurrences++;
        }
    }
     return occurrences;
}

