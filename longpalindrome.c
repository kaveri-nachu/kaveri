#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   char input[] = "jsdfjdsfhracecarksdfjsdkfmalayalamcheck";
   char* ptr = input;
int location = 0;
   int maxsize = 0;
   for ( int i = 0; i < strlen(input) - 1; i++ ) 
   {
       int left = i;
       int right = i;
       int count = 0;
       while ( left > 0 ) {
           if ( input[left--] != input[right++] )
           {
               break;
           }
           count++;
       }
       if ( count > maxsize )
       {
          maxsize = count;
          location = i;
       }
   }

   cout << maxsize << " @ " << location << endl;
   int start = location - maxsize;
   int end = location + maxsize;
   for ( int i = start + 1; i < end; i++ )
   {
       cout << input[i];
   }
   return 0;
}

