#include <iostream>

using namespace std;

int main(){
    int s;
    cin >> s;

    for (int i = 1; i<=s; i++){
        for (int j = 0; j<=s-i; j++){
            cout << i << j << s-j-i << endl;
        }
    }

    return 0;
}