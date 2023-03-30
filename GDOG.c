#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n,k;
	    scanf("%ld %ld",&n, &k);
	    
	    long int max=(n%k);
	    for (long int i=1; i<=k; i++) 
	    {
	        if (max<=(n%i)) max=(n%i);
	    }
	
    	printf("%ld\n",max);
	}
	return 0;
}

