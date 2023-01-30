#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int n,x;
	    scanf("%d %d", &n, &x);
	    int s[n],r[n];
	    for (int i=0; i<n; i++) scanf("%d %d", &s[i], &r[i]);
	 
	    for (int i=0; i<n; i++) 
	    {
	        if (s[i]>x)
	        {
	            r[i]=0;
	        }
	    }
	    for (int j=0; j<n; j++)
	    {
	        if (r[0]<r[j]) r[0]=r[j];
	    }
	    printf("%d\n",r[0]);
	    q--;
	    
	}
	return 0;
}

