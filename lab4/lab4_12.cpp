//Find the sum of the smallest elements of each column of the matrix and their coordinates. If there same min elements in column program takes coordinates of the first one.

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
    int sum = 0;

    cout << "coordinates of min elements:" << endl;

    for (int i = 0; i<m; i++){
        int row = 1;
        int min = 0;
        for (int j = 0; j<n; j++){
            if (j == 0){
                min = ar[j][i];
            } else if (ar[j][i] < min){
                min = ar[j][i];
                row = j+1;
            }
        }
        cout << row << ";" << i+1 << endl;
        sum += ar[row-1][i]; 
    }

    cout << endl << "Their sum:" << endl << sum << endl;

    return 0;
}