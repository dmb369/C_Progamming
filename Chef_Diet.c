#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n, &k);
	    int a[n];
	    for (int i=0; i<n; i++) scanf("%d",&a[i]);
	    
	    int extra=0,b,i;
	    for(i=0; i<n; i++)
	    {
	        b=extra+a[i];
	        
	        if (b<k)
	        {
	            printf("NO %d\n",i+1);
	            break;
	        }
	        else
	        {
	            if (b>k) extra=b-k;
	        }
	    }
	    if (i==n) printf("YES\n");
	}
	return 0;
}

