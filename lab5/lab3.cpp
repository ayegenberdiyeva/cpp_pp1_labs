#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, t;
    int ans = 0;
    cin >> s >> t;

    if (s.find(t) != string::npos){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}