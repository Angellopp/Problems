#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt,n,aux; cin>>tt;
    while(tt--){
        // vector<int> even, odd; cin>>n;
        // for(int i=0;i<n;i++){    
        //     cin>>aux;
        //     (!(aux%2))?even.push_back(aux):odd.push_back(aux);
        // }
        // sort(even.begin(),even.end(),greater<int>());
        // sort(odd.begin(),odd.end(),less<int>());
        // for(int i:odd) even.push_back(i);
        // for(int i:even) cout<<i<<"-"; cout<<"\n";
        cin>>n; int even=0,odd=0;
        for(int i=0;i<n;i++){    
            cin>>aux;
            (!(aux%2))?even+=aux:odd+=aux;
        }
        (even>odd)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}