#include <stdio.h>

int main(void) {
    int i,T,G,B;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&G,&B);
        printf("%d\n",B-G);
    }
	return 0;
}