#include <iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> ar(n+1);
    for(int i=0;i<=n;++i){
        cin >> ar[i];
    }
    int minld = INT_MAX;
    for(int i=1;i<=n;++i){
        minld = min(minld, max(ar[i-1],ar[i]));
    }
    cout << minld << '\n';

    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}