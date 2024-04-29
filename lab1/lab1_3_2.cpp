#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int convert(long long n){
    int dec = 0, i = 0, rem;

    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}

int main (){
    long long n;
    cin >> n;
    cout << convert(n);
    return 0
}