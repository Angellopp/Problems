#include <iostream>
#define ll long long
using namespace std;

int main() {
    int n; cin>>n;
    ll m,k, c=0;
    while(n--){
        cin>>m>>k; c=0;
        while(m){
            ll r=m%k;
            if(r){
                m-=r; c+=r;
            }
            else{
                m/=k; c++;
            }
        }
    cout<<c<<endl;
    }
}