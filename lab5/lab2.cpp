#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++){
        int k = (int) s[i];
        if ( k >= 97 && k <= 122){
            k -= 32;
            s[i] = (char) k;
        }
    }

    cout << s << endl;

    return 0;
}