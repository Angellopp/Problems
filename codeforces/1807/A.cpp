#include <iostream>

using namespace std;

int main() {
    int t,a,b,c; cin>>t;
    while(t--){
        cin>>a>>b>>c;
        (a+b==c)?cout<<"+\n":cout<<"-\n";
    }
    return 0;
}