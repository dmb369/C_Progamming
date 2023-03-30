#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,a,b;
	    scanf("%d %d %d",&n, &a, &b);
	    int mid;
	    if (n%2==0) mid=n/2;
	    else mid=(n+1)/2;
	    
	    int c=((n-mid)*a)+(mid*b);
	    printf("%d\n",c);
	    
	}
	return 0;
}

