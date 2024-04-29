#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, a = - pow(10,9);
    cin >> n;

    int *array = new int[n];

    for ( int i = 0; i < n; i++){
        cin >> array[i];
    }

    for ( int i = 0; i < n; i++){
        for (; array[i] > a;){
            a = array[i];
        }
    }

    cout << a << endl;

    return 0;
}