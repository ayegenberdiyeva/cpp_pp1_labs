#include <iostream>

using namespace std;

int main(){
    string c, s;
    cin >> c >> s;

    for (int i = 0; i<s.size(); i++){
        if ( s[i] != c[0]){
            cout << s[i];
        }
    }

    return 0;
}