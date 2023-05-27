#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        string s,ss; cin>>s>>ss;
        
        if(s[0]!=ss[0] || s[n-1]!=ss[n-1]){
            cout<<"-1\n";continue;
        }
        ll a1[200000]{},a2[200000]{};
        char ini=s[0];
        ll aux=1, n1=0,n2=0;
        //
        for(int i=1;i<n;i++){
            if(s[i]==ini)
                aux++;
            else{
                a1[n1++]=aux;
                ini=s[i];
                aux=1;
            }
        } a1[n1++]=aux;
        //
        //
        aux=1; ini=ss[0];
        for(int i=1;i<n;i++){
            if(ss[i]==ini)
                aux++;
            else{
                a2[n2++]=aux;
                // if(a2[n2-1]==1 && a1[n2-1]==1)
                // total+=abs(a2[n2-1]-a1[n2-1]);
                ini=ss[i];
                aux=1;
            }
        } a2[n2++]=aux;
        //
        if(n1!=n2){
            cout<<"-1\n";continue;
        }
        //
        ll total=0;
        for(int i=0;i<n1;i++){
            int dif=a1[i]-a2[i];
            if(dif==0) continue;
            if(dif>0){
                a1[i+1]+=dif;
            }
            else{
                a2[i+1]-=dif;
            }
            total+=abs(dif);
        }
        cout<<total<<"\n";
        
    }
}
