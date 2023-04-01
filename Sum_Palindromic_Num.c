#include <stdio.h>

int palindrome(int n)
{
    int temp=n,sum=0,rem;
    while(n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if (temp==sum) return temp;
    else return 0;
}

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a, &b);
	    
	    int sum_1=0;
	    for (int i=a; i<=b; i++)
	    {
	        int c=palindrome(i);
	        sum_1+=c;
	    }
	    printf("%d\n",sum_1);
	}
	return 0;
}

