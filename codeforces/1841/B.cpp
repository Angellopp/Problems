#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt; cin >> tt;
    int n,aux;
    while (tt--) {
        cin >> n;
        vector <int> v;
        cin >> aux;
        v.push_back(aux);
        cout << 1;
        int cont = 0;
        for(int i = 1; i < n ; i++) {
            cin >> aux;
            if(v.back() <= aux) {
                if (cont == 1) {
                    if (v.front() >= aux) {
                        v.push_back(aux);
                        cout << 1;
                    }
                    else 
                        cout << 0;
                }
                else{ 
                    v.push_back(aux);
                    cout << 1;
                }
            }
            // else if(cont <= ){
            else if(cont == 0) {
                if (v.front() >= aux) {
                    cont++;
                    v.push_back(aux);
                    cout << 1;
                }
                else 
                    cout << 0;
            }
            else {
                cout << 0;
            }
            // }
        }    
        cout << "\n";
    }

  return (0);
}