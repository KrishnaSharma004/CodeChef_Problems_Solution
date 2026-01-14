#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string v;
	    cin >> v;
	        
	    int chef = 0;
	    int nt_chef = 0;
	    int ways = 0;
	    for(int i=0;i<n;++i){
	        if(v[i] == '1') chef++;
	        else nt_chef++;
	       
	        if(chef > nt_chef) ways++;
	   }
	   
	   cout << ways << '\n';
	}
    return 0;
}