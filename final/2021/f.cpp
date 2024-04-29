#include <iostream>

using namespace std;

bool structure(string s){
    bool saw_at = false;
    for (int i = 0; i<s.size(); i++){
        int k = (int) s[i];
        if (((i == s.size()-1 || i == 0) && (k == 64 || k == 46)) || (k == 46 && saw_at == false) || (k == 64 && saw_at == true) || (k == 46 && (s[i-1] == '@')) || ((k != 64 || k != 46) && (k<97 && k>122))){
            return false;
        }
        if (k == 64){
            saw_at = true;
        }
    }
    return true;
}

int main(){
    string email;
    cin >> email;

    if (structure(email) == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}