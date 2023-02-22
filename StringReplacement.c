#include <stdio.h>
#include <string.h>
int main(void) {
	int n;
	scanf("%d", &n);
	while(n--)
	{
	    char a[100000];
	    scanf("%s", a);
        long int l = strlen(a);
	    for (long int i=0; i<l-4; i++)
        {
            if (a[i]=='p' && a[i+1]=='a' && a[i+2]=='r' && a[i+3]=='t' && a[i+4]=='y')
            {
                a[i]='p';
                a[i+1]='a';
                a[i+2]='w';
                a[i+3]='r';
                a[i+4]='i';
            }
        }
        for (long int i=0;i<l;i++)
        printf("%c",a[i]);
        
        printf("\n");
	}
	return 0;
}