#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char a[n];
	    scanf("%s",a);
	    int count_0=0,count_1=0;
	    for (int i=0; i<n; i++ ) 
	    {
	        if (a[i]=='1') count_1++;
	        else count_0++;
	    }
	    
	    if (count_1<=count_0) printf("%d\n",count_1);
	    else printf("%d\n",count_0+1);
	}
	return 0;
}

