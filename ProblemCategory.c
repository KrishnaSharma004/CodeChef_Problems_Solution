#include <stdio.h>

int main(){
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int x;
	    scanf("%d",&x);
	    if(x>=1 && x<100)
	    {
	        printf("\neasy");
	    }
	    else if(x>=100 && x<200)
	    {
	        printf("\nmedium");
	    }
	    else
	    {
	        printf("\nhard");
	    }
	}
	return 0;
}


