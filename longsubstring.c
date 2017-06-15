#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define NO_OF_CHARS 256
 int min(int a, int b);
 int longestUniqueSubsttr(char *str)
{
    int n = strlen(str);
    int cur_len = 1; 
    int max_len = 1;  
    int prev_index;   
    int i;
    int *visited = (int *)malloc(sizeof(int)*NO_OF_CHARS);
  for (i = 0; i < NO_OF_CHARS;  i++)
        visited[i] = -1;
 visited[str[0]] = 0;
 for (i = 1; i < n; i++)
    {
        prev_index =  visited[str[i]];
 if (prev_index == -1 || i - cur_len > prev_index)
            cur_len++;
 else
        {
                        if (cur_len > max_len)
                max_len = cur_len;
  cur_len = i - prev_index;
        }
         visited[str[i]] = i;
    }
if (cur_len > max_len)
        max_len = cur_len;
free(visited); 
    return max_len;
}
 int min(int a, int b)
{
    return (a>b)?b:a;
}
 int main()
{
    char str[] = "ABDEFGABEF";
    printf("The input string is %s \n", str);
    int len =  longestUniqueSubsttr(str);
    printf("The length of the longest non-repeating "
           "character substring is %d", len);
    return 0;
}
