#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for (int i=0; i<n; i++) scanf("%d",&a[i]);
	    
	    int min=a[0];
	    for (int i=0; i<n; i++) if (a[i]<min) min=a[i];
	    
	    int count=0;
	    for (int i=0; i<n; i++) 
	    {
	        if (a[i]>min) 
	        {
	            count++;
	        }
	    }
	    
	    printf("%d\n",count);
	}
	return 0;
}

