#include<stdio.h>
using namespace std;
 struct Point
{
    int x, y;
};
 int distSq(Point p, Point q)
{
    return (p.x - q.x)*(p.x - q.x) +
           (p.y - q.y)*(p.y - q.y);
}
 bool isSquare(Point p1, Point p2, Point p3, Point p4)
{
    int d2 = distSq(p1, p2); 
    int d3 = distSq(p1, p3); 
    int d4 = distSq(p1, p4); 
   if (d2 == d3 && 2*d2 == d4)
    {
        int d = distSq(p2, p4);
        return (d == distSq(p3, p4) && d == d2);
    }
  if (d3 == d4 && 2*d3 == d2  {
        int d = distSq(p2, p3);
        return (d == distSq(p2, p4) && d == d3);
    }
    if (d2 == d4 && 2*d2 == d3)
    {
        int d = distSq(p2, p3);
        return (d == distSq(p3, p4) && d == d2);
    }
   return false;
}
 int main()
{
    Point p1 = {20, 10}, p2 = {10, 20},
          p3 = {20, 20}, p4 = {10, 10};
    isSquare(p1, p2, p3, p4)? cout << "Yes": cout << "No";
    return 0;
}
