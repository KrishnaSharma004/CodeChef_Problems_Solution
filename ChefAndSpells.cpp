#include <iostream>
#include <algorithm>

using namespace std;
void logic(){
    int a,b,c;
    cin >> a >> b >> c;
    int max1,max2;
    if(a>=b && a>=c){
        max1=a;
        if(b>=c) max2 = b;
        else max2 = c;
    }
    else if(b>=a && b>=c){
        max1=b;
        if(a>=c) max2 = a;
        else max2 = c;
    }
    else if(c>=a && c>=b){
        max1=c;
        if(a>=b) max2=a;
        else max2=b;
    }
    cout << max1+max2 << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        logic();
    }
}
