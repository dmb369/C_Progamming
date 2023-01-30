#include <stdio.h>

int main(void) {
	int q;
	scanf("%d", &q);
	while (q>0)
	{
	    int x;
	    scanf("%d",&x);
	    if (1<=x && x<100) printf("Easy\n");
	    else if (100<=x && x<200) printf("Medium\n");
	    else printf("Hard\n");
	    q--;
	}
	return 0;
}

