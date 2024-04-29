//Given a two-dimensional array n x n. Find the largest number in array.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, b = - pow(10,6);
    cin >> n;

    int a[n][n];

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if ( a[i][j] > b){
                b = a[i][j];
            }
        }
    }

    cout << b << endl;

    return 0;
}