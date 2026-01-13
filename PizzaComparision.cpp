#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        double a,b;
        cin >> a >> b;
        if((100/a) > (225/b))
            cout << "Small" << '\n';
        else if((100/a) < (225/b))
            cout << "Large" << '\n';
        else cout << "Equal" << '\n';
    }
    return 0;
}
