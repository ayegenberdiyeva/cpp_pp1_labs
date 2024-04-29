#include <iostream>

using namespace std;

int main(){
    int n, m, sum_max = 0, sum, index;
    cin >> n >> m;

    bool all_equal = false;

    int ar[n][m];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> ar[i][j];
            sum += ar[i][j]; 
        }
        if (sum>sum_max){
            sum_max = sum;
            index = i;
            all_equal = false;
        } else if (sum == sum_max){
            all_equal = true;
        }
    }

    if (all_equal == true){
        cout << "Numbers are equal" << endl;
    } else {
        cout << index << endl;
    }

    return 0;
}