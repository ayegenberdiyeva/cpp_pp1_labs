//Write a program that enters a two-dimensional array and calculates the sum of its elements in columns and rows.

#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int ar[n][m];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> ar[i][j];
        }
    }

    for (int i = 0; i<n; i++){
        int sum = 0;
        for (int j = 0; j<m; j++){
            sum += ar[i][j];
        }
        cout << "The sum of row number " << i+1 << " is " << sum << endl;
    }

    for (int i = 0; i<m; i++){
        int sum = 0;
        for (int j = 0; j<n; j++){
            sum += ar[j][i];
        }
        cout << "The sum of column number " << i+1 << " is " << sum << endl;
    }

    return 0;
}