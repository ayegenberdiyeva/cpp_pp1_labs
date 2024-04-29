#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, max = 0, min = pow(10,9), a, b;
    cin >> n;
    
    int array[n];

    for ( int i = 0; i < n; i++){
        cin >> array [i];
    }

    for ( int i = 0; i < n; i++){
        if ( array[i] > max ){
            max = array[i];
            a = i;
        }
    }

    for ( int i = 0; i < n; i++){    
        if (array[i] < min){
            min = array[i];
            b = i;
        }
    }

    array[a] = array[b];

    for ( int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    return 0;
}