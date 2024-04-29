//The main diagonal of a matrix consists of those elements that lie on the diagonal that runs from top left to bottom right. Return the maximum value of the element on this diagonal and its coordinates. If there same maximum elements it takes coordinates of the first one.

#include <iostream>

using namespace std;

int main(){
    int n, max, r;
    cin >> n;

    int ar[n][n];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin >> ar[i][j];
            if (i == 0 && j == 0){
                max = ar[i][j];
            }
            if (i == j && ar[i][j] > max){
                r = i;
                max =  ar[i][j];
            }
        }
    }

    cout << "Maximum element is: " << max << " with coordinates: " << r+1 << ";" << r+1 << endl;

    return 0;
}