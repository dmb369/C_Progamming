#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char a[n+1];
	    scanf("%s",&a);
	    
	    int c=1;
	    for(int i=0; i<n-1; i++)
	    {
	        if (a[i]!=a[i+1]) c++;
	    }
	    printf("%d\n",c);
	}
	return 0;
}

