#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	
	while(q--)
	{
	    int n;
	    scanf("%d",&n);
	    char a[n];
	    scanf("%s",&a);
	    
	    int count=0;
	    for (int i=0; i<n; i++)
	    {
	        if (a[i]=='1') count++;
	    }

	    if (count==2 || count==3) printf("YES\n");
	    else if (count==1 && n>=3) printf("YES\n");
	    else printf("NO\n");
	    
	}
	return 0;
}