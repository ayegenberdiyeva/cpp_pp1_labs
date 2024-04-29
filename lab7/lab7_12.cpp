#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int i = 0, j = s.size()-1;
    bool palindrome = true;

    while (i!=j && i<j){
        if (s[i]!=s[j]){
            palindrome = false;
        } else {
            palindrome = true;
        }
        i++;
        j--;
    }

    if (palindrome == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}