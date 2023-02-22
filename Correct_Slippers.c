#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d", &n);
	for (int i=0;i<n;i++)
	{
	    int a , b, c;
	    scanf("%d %d %d", &a,&b,&c);
	    int d=a-b;
	    if (a==0 || b==0 || c==0 || d==0)
	    printf("0\n");
	    else 
	    {
	        if (d>=b)
	        printf("%d\n",b*c);
	        else 
	        printf("%d\n", d*c);
	    }
	}
	return 0;
}