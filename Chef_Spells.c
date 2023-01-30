#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a, &b, &c);
	    int d=a+b;
	    int e=b+c;
	    int f=c+a;
	    if (d>=e && d>=f) printf("%d\n",d);
	    else if (f>=d && f>=e) printf("%d\n",f);
	    else printf("%d\n",e);
	    q--;
	}
	return 0;
}

