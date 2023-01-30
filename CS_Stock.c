#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int s,a,b,c;
	    scanf("%d %d %d %d", &s, &a, &b, &c);
	    float d=(s)+(s*c*0.01);
	    if (d>=a && d<=b) printf("YES\n");
	    else printf("NO\n");
	    q--;
	}
	return 0;
}

