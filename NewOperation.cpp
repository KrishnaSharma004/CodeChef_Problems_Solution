#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int i=0;i<n;++i)
            cin >> ar[i];
        
        int min_value = ar[0];
        for(int i=0;i<n-1;++i){
            min_value = min_value + 2*ar[i+1];
        }
        int max_value = ar[n-1];
        for(int i=n-2;i>=0;--i){
            max_value = ar[i] + 2*max_value;
        }
        cout << min_value << " " << max_value << '\n';
    }
    return 0;
}