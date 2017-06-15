#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
 float h, a, b, n, x[20], y[20], sum = 0, itgl;
 int i;
 clrscr();
 printf("enter the values of a, b, n");
 scanf("%f%f%f", &a, &b, &n);
 printf("enter the values of x");
 for(i = 0; i <= n; i++)
 {
  scanf("%f", &x[i]);
 }
 printf("\n enter the values of y");
 for(i = 0; i <= n; i++)
 {
  scanf("%f", &y[i]);
 }
 h = (b - a)/n;
 a = x[0];
 b = x[n];
 for(i = 0; i <= (n-2); i++)
 {
  x[i] = x[i] + h;
  if(i % 2 == 0)
  {
   sum = sum + 4 * y[i];
  }
  else
  {
   sum = sum + 2 * y[i];
  }
 }
 itgl = sum * (h/3);
 printf("integral value%f", itgl);
 getch();
}
