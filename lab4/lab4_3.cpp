//Given a two-dimensional array of size n x m (n rows, m columns). Write a program, which outputs count of negative numbers in array.

#include <iostream>

using namespace std;

int main(){
    int n, m, count = 0;
    cin >> n >> m;

    int a[n][m];

    for ( int i = 0; i<n; i++){
        for ( int j = 0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for ( int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            if (a[i][j] < 0){
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}