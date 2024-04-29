#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int ans = 0;
    
    if (s.size() == t.size()){
        for (int i = 0; i < s.size(); i++){
            if (s[i] == t[i]){
                ans = 1;
            }
            else{
                ans = 0;
                break;
            }
        }
    }
    
    if ( ans == 1 ){
        cout << "YES" << endl;
    }
    else 
        cout << "NO" << endl;

    return 0;
}