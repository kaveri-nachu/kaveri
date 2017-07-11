#include <stdio.h>
void towerofhanoi(int num,char frompeg,char topeg,char auxpeg)
{
    if(num==1)
    {
        printf("\nMoving disc 1 from peg %c to peg %c",frompeg,topeg);
        return;
    }
    towerofhanoi(num-1,frompeg,auxpeg,topeg);
    printf("\nMoving disc %d from peg %c to peg %c",num,frompeg,topeg);
    towerofhanoi(num-1,topeg,frompeg,auxpeg);
}
int main(){
    int num;
    scanf("%d",&num);
    towerofhanoi(num,'A','C','B');
    return 0;
}
