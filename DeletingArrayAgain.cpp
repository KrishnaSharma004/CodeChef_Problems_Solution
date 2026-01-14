#include <iostream>
using namespace std;
int findMInIndex(vector<int> &a,int n){
    int min_ele = a[0];
    int min_idx;
    for(int i=0;i<n;++i){
        if(min_ele > a[i]){
            min_ele = a[i];
            min_idx = i;
        }
    }
    return min_idx;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> c(n);
        for(int i =0;i<n;++i)   
            cin >> a[i];
        for(int i =0;i<n;++i)   
            cin >> c[i];
        
        vector<int> p(n,c[0]);
        for(int i=1;i<n;++i)
            p[i] = min(p[i-1],c[i]);

        int ans = 0;
        for(int i=0;i<n;++i)
            ans += a[i]*p[i];

        cout << ans << '\n';
    }
    return 0;
}