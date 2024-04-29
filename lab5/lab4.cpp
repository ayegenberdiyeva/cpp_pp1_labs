#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 0, half = s.size() / 2;

    for (int i = 0, j = s.size() - 1; i < half && j >= half; i++, j--){
        if ( s[i] == s[j]){
            ans = 1;
        }
        else{
            ans = 0; 
            break;
        }
    }

    if (ans == 1 ){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;


    return 0;
}