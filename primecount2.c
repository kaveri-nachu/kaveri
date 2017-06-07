#include<conio.h>
long countprime(long a,long k)
{
long i;
for(i=a;i>=2;i--)
{
if(k%i==0)
return 0;
}
return 1;
}
void main()
{
long i,range;
long count=1;
double x;
printf("Enter the range: ");
scanf("%ld\n",&range);
for(i=3;i<range;i++)
{
x=sqrt(i);
count+=countprime(floor(x),i);
}
printf("\n Total number of prime numbers are %ld",count);
getch();
}
