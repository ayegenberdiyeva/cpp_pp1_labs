#include <iostream>

using namespace std;

void isTasty(string s){
    int sum = 0;
    for (int i = 0; i<s.size(); i++){
        sum += (int) s[i];
    }

    if (sum >= 300){
        cout << "It is tasty!" << endl;
    } else {
        cout << "Oh, no!" << endl;
    }
}

int main(){
    string ami;
    cin >> ami;
    
    isTasty(ami);
    
    return 0;
}