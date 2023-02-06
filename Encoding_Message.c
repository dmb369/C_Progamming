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
        
        for (int i=0; i<n; i++)
        {
            int temp;
            if ((n%2)!=0) 
            {
                if (i==(n-1)) break;
                else if ((i%2)==0) 
                {
                    temp=a[i+1];
                    a[i+1]=a[i];
                    a[i]=temp;
                }
            }
            else 
            {
                if ((i%2)==0) 
                {
                    temp=a[i+1];
                    a[i+1]=a[i];
                    a[i]=temp;
                }
            }
        }
        
        int b[n];
        for (int i=0; i<n; i++)
        {
            b[i]=97-a[i]+122;
        }
        
        char s[n];
        for (int i=0; i<n; i++)
        {
            s[i]=b[i];
            printf("%c",s[i]);
        }
        printf("\n");
    }
	return 0;
}

