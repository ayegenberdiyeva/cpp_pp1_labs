#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string s;
    int smaller = 0, capital = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++){
        int k = (int) s[i];
        if ( k >= 97 && k <= 122){
            smaller++;
        }
        else if ( k >= 65 && k <= 90){
            capital++;
        }
    }

    cout << smaller << " " << capital << endl;

    return 0;
}