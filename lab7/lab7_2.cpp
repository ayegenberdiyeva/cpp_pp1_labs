#include <iostream>

using namespace std;

void dec_to_binary(int n){
    if (n == 0){
        return;
    }

    dec_to_binary(n/2);

    cout << n%2;
}

int main(){
    int n;
    cin >> n;

    dec_to_binary(n);

    return 0;
}