#include <iostream>
#include <set>
#define ll long long
using namespace std;

int main() {
    ll n; cin>>n;
    int r=n%10;
    if(r<=5)
        n-=r;
    else
        n+=(10-r);
    cout<<n;
}