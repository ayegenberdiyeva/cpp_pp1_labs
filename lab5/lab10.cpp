#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int i = 1, j = s.size()-1;

    bool are_letters_checked = false;
    
    if ( s.size() == 2){
        cout << "YES" << endl;
    } else {
        while (i < j){
        if (s[i] == s[j]){
            are_letters_checked = true;
        }
        else {
            are_letters_checked = false;
            break;
        }
        i++;
        j--;
        }

        if (are_letters_checked == true){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}