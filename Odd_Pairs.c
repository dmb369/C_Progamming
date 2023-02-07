#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
	long int n;
	scanf("%ld",&n);
    if(n%2==0){
        long int mid=n/2;
        printf("%ld\n",mid*mid*2);
    }else{
        long int mid=n/2+1;
        printf("%ld\n",mid*(n/2)*2);
    }
        
    }
	return 0;
}

