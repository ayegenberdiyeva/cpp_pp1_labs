#include <iostream>

using namespace std;

void Remove_Vowels(string s){
    for (int i = 0; i<s.size(); i++){
        int k = (int) s[i];
        if ( k == 97 || k == 101 || k == 105 || k == 111 || k == 117 || k == 65 || k == 69 || k == 73 || k == 79 || k == 85){
            for (int j = i+1, l = i; j<s.size(); j++, l++){
                s[l] = s[j];
            }
            i--;
            s.resize(s.size()-1);
        }

    }

    cout << s << endl;
}

int main(){
    string s;
    getline(cin, s);

    Remove_Vowels(s);

    return 0;
}