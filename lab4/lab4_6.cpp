//Given a two-dimensional array n x n. Write a program, which finds position of maximum element in array. If maximums are two or more you should output position of the first one.

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, l;
    cin >> n;

    int a[n][n];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin >> a[i][j];
        }
    }

    int new_s = n*n;
    int b[new_s];
    for ( int i = 0; i<n; i++){
        for ( int j = 0; j<n; j++){
            b[i*n+j] = a[i][j];
        }
    } 

    sort(b, b + new_s);

    int max = b[new_s - 1];

    for(int i = n-1; i>=0; i--){
        for ( int j = n-1; j>=0; j--){
            if (a[i][j] == max){
                m = i+1;
                l = j+1;
                break;
            }
        }
    }

    cout << m << " " << l;

    return 0;
}