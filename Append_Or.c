#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,y,z=0;
        scanf("%d%d", &n, &y);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            z=(z|(a[i]));
        }
        if((z&y)==z)
        {
            int x=(z^y);
            printf("%d\n", x);
        }
        else printf("-1\n");
    }
	return 0;
}

