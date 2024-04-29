#include <iostream>

using namespace std;

void reversik(string s, int i){
    if (i == s.size()){
        return;
    }

    reversik(s, i+1);

    cout << s[i];
}

int main(){
    string ami;
    cin >> ami;
    int i = 0;

    reversik(ami, i);

    return 0;
}