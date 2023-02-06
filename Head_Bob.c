#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while (t--)
	{
	    int n;
	    scanf("%d",&n);
	    char a[n];
	    scanf("%s",a);
	    int y=0,z=0;
	    
	    for (int i=0; i<n; i++)
	    {
	        if (a[i]=='Y') y++;
	        else if (a[i]=='I') z++;
	    }
	    
	    if (y>0) printf("NOT INDIAN\n");
	    else if (z>0) printf("INDIAN\n");
	    else printf("NOT SURE\n");
	}
	return 0;
}

