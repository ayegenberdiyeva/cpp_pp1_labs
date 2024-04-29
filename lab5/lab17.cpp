#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    bool are_values_checked = false;

    if ( t.size() % s.size() == 0){
        for (int i = 0; i<t.size(); i++){
            int j = i % s.size();
            if ( t[i] == s[j]){
                are_values_checked = true;
            } else {
                are_values_checked = false;
                break;
            }
        }
    }

    if (are_values_checked == true){
        cout << "YES" << endl;
    } else 
        cout << "NO" << endl;
    return 0;
}