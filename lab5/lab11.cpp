#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int vowels_count = 0;

    for (int i = 0; i < s.size(); i++){
        if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowels_count += 1;
        }
    }

    cout << vowels_count << endl;
    
    return 0;
}