#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cn_0 = 0,cn_1 = 0;
        int good_sub = 0;
        for(int i=0;i<n;++i){
            if(s[i] == '0') 
                cn_0++;
            else cn_1++;
            
            if(cn_1 >= cn_0) 
                good_sub++;
        }
        cout << good_sub << '\n';
    }
    return 0;
}