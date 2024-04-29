//Write a program that prints an n x n multiplication table.

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    for ( int i = 0; i<n; i++){
        a[i][0] = i;
        a[0][i] = i;
    }

    for (int i = 1; i<n; i++){
        for ( int j = 1; j<n; j++){
            a[i][j] = a[0][j] * a[i][0];
        }
    }

    for ( int i = 0; i<n; i++){
        for ( int j = 0;j<n; j++){
            cout << a[i][j] << " ";
            if ( j == n-1 ){
                cout << endl;
            }
        }
    }

    return 0;
}