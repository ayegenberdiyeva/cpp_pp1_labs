#include <iostream>

using namespace std;

int main(){
    int n, a;
    cin >> n;

    int array[n];

    for ( int i = 0; i < n; i++){
            cin >> array[i];
    }

    for ( int i = 0, j = n - 1; i < n/2; i++, j--){
        a = array[i];
        array[i] = array[j];
        array[j] = a;
    }
    
    for ( int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    return 0;
}