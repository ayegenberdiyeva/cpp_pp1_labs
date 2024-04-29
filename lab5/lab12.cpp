#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ar[s.size()];

    for (int i = 0; i < s.size(); i++){
        int k = (int) s[i];
        ar[i] = k;
    }

    bool is_array_checked = false;

    for (int i = 1; i<s.size(); i++){
        if (ar[i] - ar[i-1] == 1 || ar[i] - ar[i-1] == 0){
            is_array_checked = true;
        }
        else {
            is_array_checked = false;
            break;
        }
    }

    if (is_array_checked == true){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    return 0;
}