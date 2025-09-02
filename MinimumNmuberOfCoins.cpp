#include <iostream>
using namespace std;
void logic(){
    int x;
    cin >> x;
    int rem = x%10;
    if(rem == 5){
        cout << (x/10)+1 << endl;
        return;
    }
    if(rem==0){
        cout << x/10 << endl;
        return ;
    }
    cout << -1 << endl;
    return;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        logic();
    }
}