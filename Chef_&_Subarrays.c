#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while (t>0)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for (int i=0; i<n; i++) scanf("%d",&a[i]);
	    
	    int count;
	    for (int i=0; i<n; i++)
	    {
            int sum=0, product=1;
	        for (int j=i; j<n; j++)
	        {
	            sum=sum+a[j];
	            product=product*a[j];
	            if (sum==product) count++;
	        }
	        
	    }
	    
	    printf("%d\n",count);
	    t--;
	}
	return 0;
}



