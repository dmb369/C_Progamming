#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    int a;
	    scanf("%d",&a);
	    for (int i=1; i<=a; i++)
	    {
	        if (i==1) printf("1");
	        else if (i==a) printf("1");
	        else printf("0");
	    }
	    printf("\n");
	}
	return 0;
}

