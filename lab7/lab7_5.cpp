#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    bool unique_divider = true;
    for (int i = 0; i<63; i++){
        if ( n == pow(2, i)){
            unique_divider = true;
            break;
        } else {
            unique_divider = false;
        }
    }

    if (unique_divider == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}