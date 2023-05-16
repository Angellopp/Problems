#include <bits/stdc++.h>
#define mp make_pair
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    multiset <string> ss;
    map <pair<char,char>,int> m; 
    string aux;
    int rpta=0;
    for(int i=0;i<n;i++){
        cin>>aux;
        ss.insert(aux);
    }
    for(string s:ss){
        set <char> saux;
        for(int i=0;i<s.size();i++){
            saux.insert(s[i]);
        }
        if(saux.size()==1){
            auto it=saux.begin();
            m[mp(*(it),*(it))]+=s.size();
        }
            // rpta=max(rpta,m[mp(*(it),*(it))]);
            // cout<<*(it)<<","<<*(it)<<":"<<m[mp(*(it),*(it))]<<endl;
        else if(saux.size()==2){
            auto it1=saux.begin(), it2=++saux.begin();
            m[mp(*(it1),*(it2))]+=s.size();
            // cout<<*(it1)<<","<<*(it2)<<":"<<m[mp(*(it1),*(it2))]<<endl;
            // rpta=max(rpta,m[mp(*(it1),*(it2))]);
        }
        else continue;
    }
    for(int i=97;i<123;i++){
        for(int j=97;j<123;j++){
            int aux;
            if(i==j){
                aux=m[mp(char(i),char(i))];
                rpta=max(rpta,aux);
            }
            else{
                aux=m[mp(char(i),char(j))]+m[mp(char(i),char(i))]+m[mp(char(j),char(j))];
                rpta=max(rpta,aux);
            }
            
        }
    }
    cout<<rpta;
    
    // for(pair p:m){
    //     cout<<p.first<<","<<p.second<<":"<<m[p]<<endl;
    // }
    // cout<<m[mp('b','c')];
}