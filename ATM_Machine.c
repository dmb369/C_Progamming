#include <stdio.h>

int main(void)
{
    int q;
    scanf("%d",&q);
    while (q>0)
    {
        int a,b;
        scanf("%d %d",&a ,&b);
        for (int i=1; i<=a; i++)
        {
            int c;
            scanf("%d",&c);
            if (c<b || c==b) 
            {
                printf("1");
                b-=c;
            }
            else printf("0");
        }
        q--;
        printf("\n");
    }
    return 0;
}