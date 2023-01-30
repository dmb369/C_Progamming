#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a, &b, &c);
	    int d=b-a;
	    int e=d/c;
	    printf("%d\n",e);
	    q--;
	}
	return 0;
}

