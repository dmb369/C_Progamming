#include <stdio.h>

int main(void) 
{
	int q;
	scanf("%d",&q);
	while(q--)
	{
	    int n;
	    scanf("%d",&n);
	    long long int a[n];
	    for (int i=0; i<n; i++) scanf("%lld",&a[i]);
	    
	    for (int i=0; i<n; i++)
	    {
	        for (int j=i+1; j<n; j++)
	        {
	            long long int temp;
	            if (a[j]>a[i])
	            {
	                temp=a[i];
	                a[i]=a[j];
	                a[j]=temp;
	            }
	        }
	    }
	    
	    long long int min=1000000000;
	    for (int l=0; l<n-1; l++) 
	    {
	        if ((a[l]-a[l+1])<min) min=a[l]-a[l+1];
	    }
	    
	    printf("%d\n",min);
	}
	return 0;
}

