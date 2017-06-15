#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
 float h, a, b, c, p[20], q[20], sum = 0, itgl;
 int i;
 clrscr();
 printf("enter the values of a, b, nc
 scanf("%f%f%f", &a, &b, &c);
 printf("enter the values of p");
 for(i = 0; i <= n; i++)
 {
  scanf("%f", &p[i]);
 }
 printf("\n enter the values of q");
 for(i = 0; i <= n; i++)
 {
  scanf("%f", &q[i]);
 }
 h = (b - a)/c;
 a = p[0];
 b = p[c];
 for(i = 0; i <= (n-2); i++)
 {
  p[i] = p[i] + h;
  if(i % 2 == 0)
  {
   sum = sum + 4 * q[i];
  }
  else
  {
   sum = sum + 2 * q[i];
  }
 }
 itgl = sum * (h/3);
 printf("integral value%f", itgl);
 getch();
}
