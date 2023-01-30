#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    int n;
	    scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++) scanf("%d",&a[i]);
        
        int count=0;
        for (int i=1; i<n+1; i++)
        {
            if ((a[i-1]>=1) && (a[i-1]<=7)) count++;
            if (count==7)
            {
                printf("%d\n",i);
                break;
            }
        }
	}
	return 0;
}

