#include <iostream>
using namespace std;
void logic(){
    int s,x,y,z;
    cin >> s >> x >> y >> z;
    int m = max(x,y);
    int n = s-(x+y);
    if(n>=z){
        cout << 0 << endl;
        return;
    }
    else if((n+m)>=z){
        cout << 1 << endl;
        return;
    }
    else{
        cout << 2 << endl;
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