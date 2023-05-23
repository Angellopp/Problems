#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
typedef long long ll;
string s;
ll *l,*r,*sum; ll c;

char f(ll k){
    ll i=lower_bound(sum,sum+c+1,k)-sum;
    if(i==0) return s[k-1];
    return f(k-sum[i-1]+l[i]-1);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll t,n,q,k;cin>>t;
    while(t--){
        cin>>n>>c>>q;
        l=new ll[c+10]; r=new ll[c+10]; sum=new ll[c+10]{};
        cin>>s; l[0]=1; r[0]=n; sum[0]=n;
        for(int i=1;i<=c;i++){
            cin>>l[i]>>r[i];
            sum[i]=sum[i-1]+r[i]-l[i]+1;
        }
        while(q--){
            cin>>k;
            cout<<f(k)<<"\n";
        }
        delete[] l;
        delete[] r;
        delete[] sum;
    }
} 