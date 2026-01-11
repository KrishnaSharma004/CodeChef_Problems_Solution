#include <iostream>
using namespace std;
void solve(){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> c_h(26,0);
        for(int i=0;i<n;++i){
            c_h[s[i]-97]++;
        }
        for(int i=0;i<26;++i){
            if(c_h[i] >= 2){
                cout << "Yes" << '\n';
                return;
            }
        }
        cout << "No" << '\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}