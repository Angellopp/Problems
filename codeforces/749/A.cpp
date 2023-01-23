#include <iostream>
#include <set>
#define ll long long
using namespace std;

int main() {
    ll a; cin>>a;
    cout<<a/2<<endl;
    for(ll i=1;i<a/2;i++){
        cout<<2<<" ";
    }
    if(a%2)
        cout<<3;
    else 
        cout<<2;
}