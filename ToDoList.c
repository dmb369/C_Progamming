#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    
	    for(int i=0; i<n; i++) scanf("%d",&a[i]);
	    
	    int count=0;
	    int count_1=0;
	    for(int i=0; i<n; i++)
	    {
	        for(int j=1; j<=7; j++)
	        {
	            if (a[i]==j) count++;
	        }
	        count_1++;
	        if (count==7)
	        {
	            printf("%d\n",count_1);
	            break;
	        }
	    }
	}
	return 0;
}

