#include <iostream>

using namespace std;

void k_inary(int n, int k, string s){
    if (n == 0){
        return;
    }
    int c = n%k;

    k_inary(n/k, k, s);

    cout << s[c];
}

int main(){
    int n, k;
    cin >> n >> k;

    string alphabet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    k_inary(n, k, alphabet);

    return 0;
}