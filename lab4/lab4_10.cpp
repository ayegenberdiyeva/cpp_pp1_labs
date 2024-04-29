//Given a two-dimensional array of size n x m (n rows, m columns). Add 1 to those shells where i + j is even, and subtract 1, if i + j is odd. Array indexing starts from 0 (0 is even).

#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int ar[n][m];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> ar[i][j];
            if ((i+j)%2 == 0){
                ar[i][j]++;
            } else if ((i+j)%2 == 1){
                ar[i][j]--;
            }
        }
    }
    
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}