#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while (t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for (int i=0; i<n; i++) scanf("%d",&a[i]);
	    
	    int frq[n];
	    int visited=-1;
	    int count;
	    
	    for (int i=0; i<n; i++)
	    {
	        count=1;
	        for (int j=i+1; j<n; j++)
	        {
	            if (a[i]==a[j])
	            {
	                count++;
	                frq[j]=visited;
	            }
	        }
	        if (frq[i]!=visited) frq[i]=count;
	    }
	    
	    int max=frq[0];
	    for (int i=0; i<n; i++) if (frq[i]>=max) max=frq[i];
	    
	    if (max==n) printf("0\n");
	    else printf("%d\n",n-max);
	    
	}
	return 0;
}

