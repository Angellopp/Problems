#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n; cin>>n;
        long long  sum=0;
        long long * a = new long long[n];
        long long * b = new long long[n];
        for(int i=0;i<n;i++){
            cin>>a[i]; sum+=a[i];}
        for(int i=0;i<n;i++){
            cin>>b[i]; sum+=b[i];}
        int max=0; int ind=0;
        for(int i=0;i<n;i++){
            if(b[i]>=max){
                max=b[i]; ind=i;
            }
        }    
        sum-=b[ind];
        cout<<sum<<endl;
        
    }
}