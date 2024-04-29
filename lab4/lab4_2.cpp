//Given a two-dimensional array n x n. Find the second largest number in array. If all elements are equal, output 0.

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m = - pow(10,10), max, l = 0;
    cin >> n;

    int a[n][n];

    for(int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin >> a[i][j];
        }
    }

    int new_i = pow(n,2);
    int b[new_i];
    for ( int i = 0; i<n; i++){
        for ( int j = 0; j<n; j++){
            b[i*n + j] = a[i][j];
        }
    }

    sort(b, b + new_i);


    max = b[new_i-1];

    for ( int i = new_i - 2; i >= 0; i--){
        if (b[i] != max){
            l = b[i];
            break;
        }
    }
    
    cout << l << endl;
    return 0;
}