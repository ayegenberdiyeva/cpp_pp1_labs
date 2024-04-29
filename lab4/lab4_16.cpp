//The secondary diagonal of a matrix consists of those elements that lie on the diagonal that runs from top right to bottom left. Return the sum of elements that lie on it.


#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;

    int ar[n][n];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin >> ar[i][j];
            if ( i+j == n-1){
                sum += ar[i][j];
            }
        }
    }
    
    cout << sum << endl;

    return 0;
}