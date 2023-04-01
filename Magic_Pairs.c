#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n;
	    scanf("%lld",&n);
	    long long int a[n];
	    for (long long int i=0; i<n; i++) scanf("%lld",&a[i]);
	    
	    long long int count;
	    count=(n)*(n-1)/2;
	    printf("%lld\n",count);
	}
	return 0;
}

