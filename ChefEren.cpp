#include <iostream>
using namespace std;
void logic(){
    int n,a,b;
    cin >> n >> a >> b;
    int even=0,odd=0;
    for(int i=1;i<=n;++i){
        if(i%2==0) even++;
        else odd++;
    }
    int ans = even*a + odd*b;
    cout << ans << endl;
    return ;
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    logic();
	}
    return 0;
}