#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int a;
	    scanf("%d",&a);
	    if (a%2!=0) printf("%d\n",(a/2)+1);
	    else printf("%d\n",a/2);
	    q--;
	}
	return 0;
}