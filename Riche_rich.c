#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int a,b,x;
	    scanf("%d %d %d",&a,&b,&x);
	    int c;
	    c=b-a;
	    printf("%d\n",c/x);
	}
	return 0;
}
