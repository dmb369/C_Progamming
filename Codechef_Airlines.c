#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while (t--)
	{
	    int x,y,z;;
	    scanf("%d %d %d",&x, &y, &z);
	    int a=10*x;
	    if (a>y) printf("%d\n",y*(z));
	    else printf("%d\n",z*a);
	}
	return 0;
}

