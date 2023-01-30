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
	    
	    int maxEle, count, maxcount=1;
	    for (int i=0; i<n; i++)
	    {
	        count=1;
	        for (int j=i+1; j<n; j++)
	        {
	            if (a[i]==a[j])
	            {
	                count++;
	                if (count>maxcount) maxcount=count;
	            }
	        }
	    }
	    printf("%d\n",n-maxcount);
	}
	return 0;
}

