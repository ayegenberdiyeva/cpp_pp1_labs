#include <iostream>

using namespace std;

void Valid_String(string s, int n){
    int ans = 0;
    for (int i = 0; i<s.size(); i++){
        int k = (int) s[i];
        if ( k >= 48 && k<= 57){
            ans++;
        }
    }

    if (ans >= n){
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    string s;
    int n;
    cin >> s >> n;

    Valid_String(s, n);

    return 0;
}