#include <iostream>
using namespace std;
void logic(){
    int x,n;
    cin >> x >> n;
    int m = (x*100 - n);
    if(m>=0){
        cout << 0 << endl;
        return;
    }
    else{
        int a = -m;
        if(a%100 == 0){
            cout << a/100 << endl;
        }
        else cout << (a+100-1)/100 << endl;
        return;
    }
    
}
int main() {
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}