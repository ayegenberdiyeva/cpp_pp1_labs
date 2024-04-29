#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m, max;
    cin >> n >> m;

    int ar[n][m];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> ar[i][j];
        }
    }

    cin >> max;
    int penalty = 0;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            if (ar[i][j]>max){
                penalty = 1;
            }
        }
    }

    if (penalty == 1){
        cout << "Penalty!" << endl;
    } else if (penalty == 0){
        cout << "No penalty for today." << endl;
    }

    return 0;
}