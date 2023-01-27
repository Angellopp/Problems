#include <iostream>

using namespace std;

int main() {
    int t,n; cin>>t;
    while(t--){
        cin>>n;
        int A[101][101];
        for(int i=0;i<n;i++)
            for(int j=0;j<n-1;j++)
                cin>>A[i][j];
        int p=A[0][0];
        if(A[1][0]==A[2][0]) p=A[1][0];
        else if(p==A[2][0]) p=A[2][0];
        cout<<p<<" ";
        int i;
        for(i=0;i<n;i++)
            if(A[i][0]!=p)  break;
        for(int j=0;j<n-1;j++)
            cout<<A[i][j]<<" ";
            
        
        cout<<endl;
    }  
}