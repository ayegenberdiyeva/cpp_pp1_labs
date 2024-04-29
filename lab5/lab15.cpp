#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int c_pos = 0;

    for (int i = 0; i < s.size(); i++){
        int k = (int) s[i];
            if ( k > c_pos){
                c_pos = k;
            }
    }

    cout << (char) c_pos << endl;
    
    return 0;
}