#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while (t--)
	{
	    int n;
	    scanf("%d",&n);
	    char a[n];
	    scanf("%s",&a);
	    
	    int count, flag=0, i;
	    for (i=0; i<n; i++)
	    {
	        count=1;
	        for(int j=i+1; j<n; j++)
	        {
	            if (a[i]==a[j]) 
	            {
	                flag++;
	                count++;
	                break;
	            }
	        }
	        if (flag==1) break;
	    }
	    if (i==n) printf("-1\n");
	    else printf("%d\n",n-2);
	}
	return 0;
}

