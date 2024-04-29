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

    bool cool = true;

    if (n==1 && m==1) {
        cool = true;
    } else {
        for (int i = 0; i<n-1; i++){
            for (int j = 0; j<m-1; j++){
                if (ar[i][j] == ar[i+1][j] && ar[i+1][j+1] == ar[i][j+1] && ar[i+1][j] == ar[i+1][j+1]){
                    cool = false;
                }
            }
        }
    }

    if (cool == true){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}