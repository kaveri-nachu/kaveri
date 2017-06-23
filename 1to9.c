#include<stdio.h>
int getnumber();    
int main()
{
   int input = 0;
   input = getnumber();
        while (!((input <= 9) && (input >= 1)))
        {
        printf("[ERROR] The number you entered is out of range");
                input = getnumber();
        }
    printf("The number you entered is %d", input);
    return 0;
}
