#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    int d;
	    scanf("%d",&n);
	    int max=0,min=n,count=1;
	    int x[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&x[i]);
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        if(x[i+1]-x[i]<=2)
	        {
	         count++;
	        }
	        else {
	            if(max<count) max=count;
	            if(min>count) min=count;
	            count=1;
	        }
	 
	    }
	    
	    if(max<count) max=count;
	    if(min>count) min=count;
	        
	    
	    printf("%d %d\n",min,max);
	    
	    
	}
	return 0;
}

