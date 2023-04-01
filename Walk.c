#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n;
	    scanf("%ld",&n);
	    long int a[n];
	    for (long int i=0; i<n; i++) scanf("%ld",&a[i]);
	    
	    long int max=0;
	    for (long int i=0; i<n; i++)
	    {
	        if ((a[i]+i)>max) max=a[i]+i;
	    }
	    printf("%ld\n",max);
	}
	return 0;
}

