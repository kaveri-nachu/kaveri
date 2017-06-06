#include<stdio.h>
int main()
{
int i=65;
int k=120;
printf("value of i=%d k=%d before swapping",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("value of i=%d k=%d after swapping",i,k);
}
