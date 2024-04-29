#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, x;
    int n;

    cin >> s >> x >> n;

    int asci_of_x = (int) x[0], x_count = 0;

    for (int i = 0; i<s.size(); i++){
        int k = (int) s[i];
        if ( k == asci_of_x){
            x_count++;
        }
    }
    
    if ( x_count == n){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}