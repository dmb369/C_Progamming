#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,b;
	    scanf("%d %d",&n, &b);
	    int w[n],h[n],p[n];
	    for (int i=0; i<n; i++) scanf("%d %d %d",&w[i], &h[i], &p[i]);
	    
	    for (int i=0; i<n; i++) if (p[i]>b) p[i]=0;
	    
	    int count=0;
	    for (int i=0; i<n; i++) 
	    {
	        if (p[i]==0) 
	        {
	            count++;
	            w[i]=0;
	        }
	    }
	    if (count==n) printf("no tablet\n");
	    
	    else
        {
            int max=w[0]*h[0];
            
            for (int i=0; i<n; i++)
            {
                if (w[i]*h[i]>=max) max=w[i]*h[i]; 
            }
            printf("%d\n",max);
        }
	    
	}
	return 0;
}

