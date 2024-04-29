//If an element is a perfect square, replace it with its root.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int ar[n][m];

    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> ar[i][j];
            int root = sqrt(ar[i][j]);
            if (pow(root, 2) == ar[i][j]){
                ar[i][j] = root;
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