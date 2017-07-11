#include <stdio.h>
void char_buffer_rec(char number[3], int n) 
{
    if(n > 0) 
    {
        number[3-n] = '0';
        char_buffer_rec(number, n - 1);
        number[3-n] = '1';
        char_buffer_rec(number, n - 1);
    }
    else 
        printf("%s\n", number);
}
void  main() 
{
    char number[4] = {0};
    int n;
    scanf("%d",&n);
    char_buffer_rec(number,n);
}
