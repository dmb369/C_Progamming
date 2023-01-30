#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while(q--)
	{
	    int n,w;
	    scanf("%d %d",&n, &w);
	    int a[n];
	    for (int i=0; i<n; i++) scanf("%d",&a[i]);
	    
	    for (int i=0; i<n; i++)
	    {
	        for (int j=0; j<n; j++)
	        {
	            int temp;
	            if (a[i]>a[j])
	            {
	                temp=a[i];
	                a[i]=a[j];
	                a[j]=temp;
	            }
	        }
	    }
	    int sum=0;
	    for (int i=0; i<n; i++) 
	    {
	        sum+=a[i];
	        if (sum>=w) 
	        {
	            printf("%d\n",n-i-1);
	            break;
	        }
	    }
	}
	return 0;
}

