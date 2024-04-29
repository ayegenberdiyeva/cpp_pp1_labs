#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int *array = new int[n];

    for ( int i = 0; i < n; ++i){
        cin >> array[i];
        
    } 
    for (int c = 0; c < n; ++c){
        if ( array[c] % 2 == 1){
        cout << array[c] << " ";
    }
    }

    return 0;
}