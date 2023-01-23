#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll A[13];A[0]=1;
    for(int i=1;i<12;i++){
        A[i]=A[i-1]*(i+1);
    }
    ll a,b,c; cin>>a>>b;
    c=min(a,b);
    cout<<A[c-1];
    
    
}