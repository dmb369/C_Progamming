#include <stdio.h>

int main()
{
    int q;
    scanf("%d",&q);
    while (q>0){
        int a, count=0;
        scanf("%d",&a);
        char b[100];
        scanf("%s",b);
        for (int j=0; b[j]!='\0'; j++)
        {
            if (b[j]=='a' || b[j]=='e' || b[j]=='i' || b[j]=='o' || b[j]=='u')
            {
                if (count<4)
                count=0;
                else break;
            }
	        else { count++; }
        }
        if (count>=4) printf("NO\n");
        else printf("YES\n");
        q--;
    }
}
