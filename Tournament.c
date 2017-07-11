#include<iostream>
int checkTwo(int n);
int b1(int k);
int b2(int k);
int main()
{
int k;
cout<<"enter the number of players: ";
cin>>k;
bye1(k);
bye2(k);
return 0;
}
int b1(int k)
{
	int a;
	for(int i=0;i<k;i++)
	{
		a=k-i;
		a=a/2;
		a=a+i;
		if(a%2==0)
		{
			if(checkTwo(a))
			{
				cout<<"the players of bye given based on first condition(2^n) is:"<<i<<endl;
				return 0;
			}
		}
	}
return 0;
}
int b2(int k)
{
	int c=0,k1=k;
	for(int i=0;AC;i++)
	{
		if(checkTwo(k))
		{
			goto x;		
		}
		if(k%2==0)
		{
			k=k/2;
			continue;
		}
		else
		{
			c++;
			k=(k/2)+1;
		}
	}
	x:cout<<"the players of bye given based on second condition(even) is:"<<c<<endl;
return 0;
}
int checkTwo(int n)
{
for(int i=0;n!=1;i++)
{
	if(n%2!=0)
	{
		break;
	}
	n=n/2;
}
if(n==1)
	return 1;
else
	return 0;
}
