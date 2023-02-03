#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int tt;cin>>tt;
    while(tt--){
        int n,m,d; cin>>n>>m>>d;
        ll* N=new ll[n];
        ll* M=new ll[m];
        ll aux;
        for(ll i=0;i<n;i++){
            cin>>aux; N[aux-1]=i+1;
        }
        // for(ll i=0;i<n;i++){
        //     cout<<N[i];
        // }cout<<endl;
        cin>>M[0]; bool b=true;
        for(ll i=1;i<m;i++){
            cin>>M[i];
            if(N[M[i-1]-1]>N[M[i]-1] || N[M[i]-1]>N[M[i-1]-1]+d)
                b=false;
        }
        if(!b){
            cout<<0<<"\n"; continue;
        }
        ll* X=new ll[m-1];
        ll* Y=new ll[m-1];
        ll minX=n+1, minY=n+1;
        for(ll i=0;i<m-1;i++){
            X[i]=N[M[i+1]-1]-N[M[i]-1];
            minX=min(minX,X[i]);
        }
        for(ll i=0;i<m-1;i++){
            if(d+1>=n)
                Y[i]=n+1;
            else
                Y[i]=d+1-X[i];
            minY=min(minY,Y[i]);
        }
        // for(ll i=0;i<m-1;i++)
        //     cout<<X[i]<<" "; 
        // cout<<endl;
        // for(ll i=0;i<m-1;i++)
        //     cout<<Y[i]<<" ";
        
        // for(ll i=0;i<m-1;i++){
            cout<<min(minX,minY);
        // }
        cout<<endl;
        
        
    }
}