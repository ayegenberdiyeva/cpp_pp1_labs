#include <bits/stdc++.h>

using namespace std;

int main(){
    int numik, mumik;
    cin >> numik;
    int list1[numik];
    long long maxik = 10e5;
       
    map<int, bool> mapik;
    
    for(int i = 0; i<numik; i++){
        cin >> list1[i]; 

        for(int j = 0; j<i; j++) {
            mapik[list1[i]+list1[j]] = true;
        }
    }
    
    cin >> mumik;
    
    int sumik = 0;
    
    for(int i = 0; i<mumik; i++){
        cin >> sumik;
        if(mapik[sumik]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}