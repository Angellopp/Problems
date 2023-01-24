#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    int T; cin>>T;
    ll n,k;
    while(T--){
        cin>>n>>k;
        set <ll> s; ll aux;
        while(n--){
            cin>>aux; s.insert(aux);
        }
        set<ll>::iterator beg=s.begin();
        set<ll>::iterator end=s.end();
        // cout<<*beg<<" "<<*(--end)<<endl;
        ll d=*(--end)-*beg;
        // cout<<d<<endl;
        if(d>2*k){
            cout<<-1<<endl; continue;
        }
        cout<<*beg+k<<endl;
    }
    
}
  	