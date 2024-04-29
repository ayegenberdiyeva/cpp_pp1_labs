//Return all elements of the matrix in spiral order, given a matrix of nxn elements. Numbers start increasing around the corner matrix(a[0][0]) then goes inside up to the middle element making spiral shape.


#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int size = n; 

    int ar[n][n];
    int count = 1, cycle = 0, i;

    if ( n%2 == 1){
        ar[(n+1)/2][(n+1)/2] = n*n;
    }

    while ( count <= size*size ){
        for (i = cycle; i < n; i++){
            ar[cycle][i] = count++;
        }
        for (i = cycle+1; i<n; i++){
            ar[i][n-1] = count++;
        }
        for (i = n - 2; i>=cycle; i--){
            ar[n-1][i] = count++;
        }
        for (i = n - 2; i>cycle; i--){
            ar[i][cycle] = count++;
        }
        cycle++;
        n--;
    }
    
    for (int i = 0; i<size; i++){
        for (int j = 0; j<size; j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}