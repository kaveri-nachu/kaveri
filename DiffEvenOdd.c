#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d %d",&a,&b);
	int c;
	c=a-b;
	if(c%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
	return 0;
}
