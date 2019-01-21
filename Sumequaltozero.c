#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,k,j,a[100],b[100],k1,f=0,p=0; 
    scanf("%d", &n);
    for(k = 0; k < n; k++){
	
       scanf("%d",&a[k]);
}

    for(k = 0; k < n; k++)
	{
	    for(j = 0; j < n; j++)
		{
			if((a[k] + a[j] == 0) )
			printf("%d %d", a[k],a[j]);
			break;
		}
	}
}
