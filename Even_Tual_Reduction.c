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
	    int freq[n], visited=1002;
	    int count;
	    for (int i=0; i<n; i++)
	    {
	        count=1;
	        for (int j=i+1; j<n; j++)
	        {
	            if (a[i]==a[j]) 
	            {
	                count++;
	                freq[j]=visited;
	            }
	        }
	            if (freq[i]!=visited)
	            {
	                freq[i]=count;
	            }
	   }

	    int flag=0;
	    for (int i=0; i<n; i++)
	    {
	        if ((freq[i])%2!=0)
	        {
	            flag++;
	            break;
	        }
	    }
	    
	    if (flag==1) printf("NO\n");
	    else printf("YES\n");
	
	}
	return 0;
}

