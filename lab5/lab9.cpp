#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int ar_s[26] = {0}, ar_t[26] = {0};

    if (s.size() == t.size()){
        for ( int i = 0; i < s.size(); i++){
            int k = (int) s[i];
            if ( k <= 122 && k >= 97){
               ar_s[k-97] += 1;
            }
        }
        for (int i = 0; i < t.size(); i++){
            int k = (int) t[i];
            if ( k <= 122 && k >= 97){
               ar_t[k-97] += 1;
            }
        }

        bool are_letters_checked = false;
        for (int i = 0; i<26; i++){
            if ( ar_s[i] == ar_t[i]){
                are_letters_checked = true;
            } else {
                are_letters_checked = false;
                break;
            }
        }
        
        if (are_letters_checked == true){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}