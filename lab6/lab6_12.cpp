#include <iostream>

using namespace std;

void consequent_d(string s, int n){
    int count = 0;
    bool Checked_String = false;
    for (int i = 0; i<s.size(); i++){
        int k = (int) s[i];
        if (k <= 57 && k >= 48){
            count++; 
        } else {
            count = 0;
        }
        if (count == n){
            Checked_String = true;
            break;
        } else {
            Checked_String = false;
        }
    }

    if ( Checked_String == true ){
        cout << "Valid" << endl;
    } else {
        cout << "Not valid" << endl;
    }
}

int main(){
    string s;
    int n;

    cin >> s >> n;

    consequent_d(s,n);

    return 0;
}