#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> a(n+1);
	    for(int i=1;i<n+1;++i)
	        cin >> a[i];
	    
	   int ans = 0;   
	   for(int i=1;i<n+1;++i)
	        ans += a[i]*i;
	        
	   cout << ans << '\n';
	}
    return 0;
}
