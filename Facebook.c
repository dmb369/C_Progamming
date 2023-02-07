#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++){
	        scanf("%d",&b[i]);
	    }
	    int maxLikes = a[0], maxComments = b[0], maxIndex = 0;
	    for(int i=1;i<n;i++){
	        if(a[i]>maxLikes || (a[i]==maxLikes && b[i]>maxComments)){
	            maxLikes = a[i];
	            maxComments = b[i];
	            maxIndex = i;
	        }
	    }
	    printf("%d\n",maxIndex+1);
	}
	return 0;
}

