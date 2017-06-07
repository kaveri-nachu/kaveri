#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    char inputString[20];
    printf("Enter a String for Integer conversion \n");
    gets(inputString);

    printf("Integer: %d \n", atoi(inputString));
    getch();
    return 0;
}
