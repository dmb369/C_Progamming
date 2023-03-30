#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n,k,v;
	    scanf("%ld %ld %ld",&n, &k, &v);
	    long int tot=(n+k)*v;
	    long int a[n],sum=0;
	    for (long int i=0; i<n; i++)
	    {
	        scanf("%ld",&a[i]);
	        sum+=a[i];
	    }
	    if (sum<tot) 
	    {
	        int che=tot-sum;
	        if ((che%k)==0)
	        {
	            int ans=(che)/k;
	            printf("%ld\n",ans);
	        }
	        else printf("-1\n");
	    }
	    else printf("-1\n");
	}
	return 0;
}

