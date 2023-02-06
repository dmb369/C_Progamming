#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    a=a/10;
	    printf("%d\n",a*b);
	    
	}
	return 0;
}

