#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum;
    int array[n];

    for ( int i = 0; i < n; i++){
        cin >> array[i];
        sum += array [i];
    }

    cout << sum << endl;

    return 0;
}