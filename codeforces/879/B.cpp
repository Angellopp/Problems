#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,aux; ll k,kk;cin>>n>>k; kk=k;
    if(k>=n){
        cout<<n; return 0;
    }
    int* a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c=0,max=a[0];
    for(int i=0;i<n-1;i++){
        if(a[i+1]<max){
            c++;
        }
        else{
            c=1; max=a[i+1];
        }
        if(c==k){
            cout<<max; return 0;
        }
    }
    cout<<n;
    
//     4 2
// 3 1 4 2
// 1 2 3 4
}