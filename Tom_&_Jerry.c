#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int a,b,c,d,k;
	    scanf("%d %d %d %d %d",&a, &b, &c, &d, &k);
	    int e=(c-a), f=(d-b), g;
	    if (e>=0 && f>=0) g=e+f;
	    else if (e>=0 && f<=0) g=e-f;
	    else if (e<=0 && f>=0) g=f-e;
	    else g=(-1)*(e+f);
	    
	    if (k<g) printf("NO\n");
	    else if (k==g) printf("YES\n");
	    else if ((k-g)%2 == 0) printf("YES\n");
	    else printf("NO\n");
	    q--;
	}
	return 0;
}

