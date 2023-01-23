#include <iostream>
#include <set>
#define ll long long
using namespace std;

int main() {
    set<ll> s; ll aux;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>aux; s.insert(aux);
    }
    set<ll>::iterator it=s.begin();
    if((*it)==1){
        cout<<1; return 0;
    }
    bool b=true;
    for (auto x:s) {
        if(x%(*it)){
            b=false; break;
        }
    }
    (b)?cout<<*it:cout<<-1;
    
}