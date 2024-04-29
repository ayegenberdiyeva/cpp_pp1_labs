#include <iostream>

using namespace std;

void transposed_array(int n, int m){
    int ar[n][m];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            cout << ar[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    transposed_array(n, m);

    return 0;
}