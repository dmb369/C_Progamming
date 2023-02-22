#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int a[t];
        for (int i=0; i<3; i++) scanf("%d",&a[i]);
        
        int min=a[0];
        int index=0;
        for (int j=0; j<3; j++)
        {
            if (a[j]<min) 
            {
                min=a[j];
                index=j;
            }
        }
        
        if (index==0) printf("Draw\n");
        else if (index==1) printf("Bob\n");
        else printf("Alice\n");
    }
	return 0;
}

