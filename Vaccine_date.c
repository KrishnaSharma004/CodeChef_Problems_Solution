#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int d,l,r;
	    scanf("%d %d %d",&d,&l,&r);
	    if(d>r) printf("Too Late\n");
	    else if(d<l) printf("Too Early\n");
	    else if(d>=l && d<=r) printf("Take second dose now\n");
	}
	return 0;
}

