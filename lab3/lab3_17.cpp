#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x, i;
    bool prime = true;

    cin >> x;

    if (x == 1){
        prime = false;
    }

    for (i = 2; i < x/2; i++){
        if (x%i == 0){
            prime = false;
            break;
    }}

    if (prime)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    return 0;
}