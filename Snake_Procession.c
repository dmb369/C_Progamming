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
	    
	    int i,count=0;
	    for(i=0; i<n; i++) 
	    {
            if(a[i]=='H') count++;
            else if(a[i]=='T' && count==1) count=0;
            else if(a[i]=='.') continue;
            else break;
        }
        
        if(i==n && count==0) printf("Valid\n");
        else printf("Invalid\n");
	}
	
	return 0;
}

