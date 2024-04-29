#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        int k = (int) s[i];
        if (k == 122){
            k = 97;
        } else
            k++;
        cout << (char) k;
    }

    return 0;
}