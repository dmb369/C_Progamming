#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for (int i=0; i<n; i++) scanf("%d", &a[i]);
	    
	    int count=1;
	    
	    for (int i=0; i<n; i++)
	    {
	        int j;
	        for (j=0; j<i; j++) if (a[i]==a[j]) break;  
	        if (i==j) count++;
	    }
	    
	     printf("%d\n",count-1);
	}
	return 0;
}

