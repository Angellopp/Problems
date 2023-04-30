#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    cin.tie(0); ios::sync_with_stdio(false);
    int x,y,n; cin>>n>>x>>y;
    for(int i=0;i*x<=n;i++){
        if((n-x*i)%y==0){
            cout<<"YES\n"<<i<<" "<<(n-x*i)/y;
            return 0;
        }
    }
    cout<<"NO";
            
}