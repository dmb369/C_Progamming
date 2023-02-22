#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        int x1,x2,y1,y2,z1,z2;
        scanf("%d %d %d %d %d %d",&x1,&x2,&y1,&y2,&z1,&z2);
        if(x2>=x1 && y2>=y1 && z2<=z1)
        {
            printf("YES\n");
        }
        else
        printf("NO\n");
        

        
    }
}