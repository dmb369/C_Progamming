#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    int a,b;
	    scanf("%d %d",&a, &b);
	    int c=a+b;
	    int count=0;
	    while (c>0)
	    {
	        int d=c%10;
	        if (d==1) count+=2;
	        else if (d==7) count+=3;
	        else if (d==4) count+=4;
	        else if (d==2 || d==3 || d==5) count+=5;
	        else if (d==0 || d==6 || d==9) count+=6;
	        else count+=7;
	        c/=10;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

