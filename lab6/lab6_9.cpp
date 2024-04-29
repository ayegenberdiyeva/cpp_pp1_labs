#include <iostream>

using namespace std;

void Change_String(string s){
    for (int i = 0; i<s.size(); i+= 2){
        int k = ((int) s[i]) - 32;
        if ( k <= 90 && k >= 65){
            s[i] = (char) k;
        }
    }

    cout << s << endl;
}

int main(){
    string s;
    cin >> s;

    Change_String(s);

    return 0;
}