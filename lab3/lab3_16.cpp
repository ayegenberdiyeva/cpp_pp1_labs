#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x, a;
    cin >> x;

    a = sqrt (x);

    if ( x%a != 0){
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }

    return 0;
}