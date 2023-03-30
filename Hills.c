#include <stdio.h>

int main(void) {
	int t;
    scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    long long int u,d;
	    scanf("%d %lld %lld",&n, &u ,&d);
	    long long int a[n];
	    for (int i=0; i<n; i++) scanf("%lld",&a[i]);
	    
	    int count=0;
	    int index=0;
	    for (int j=0; j<n-1; j++)
	    {
	        if (a[j]==a[j+1]) index++;
	        else if (a[j]<a[j+1])
	        {
	            if ((a[j+1]-a[j])<=u) index++;
	            else break;
	        }
	        else if (a[j]>a[j+1])
	        {
	            if ((a[j]-a[j+1])<=d) index++;
	            else
	            {
	                if (count==0)
	                {
	                    count=-1;
	                    index++;
	                }
	                else break;
	            }
	        }
	        else break;
	    }
	    printf("%d\n",index+1);
	}
	return 0;
}

