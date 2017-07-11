#include <iostream>
using namespace std;
long int n=0;
int noc(long int sum)
   {
     if(sum<3)
	     return sum;
	if(sum<5 && sum>=3)
	   return noc(sum%3)+sum/3;
    if(sum>=5)
	 return noc(sum%5)+sum/5;
	 }
void main()
{
	long int sum;
	cin>>sum;
	cout<<noc(sum)<<endl;
	}
