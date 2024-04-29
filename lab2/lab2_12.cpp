#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, a = 2;
    cin >> n;

    for ( int i = 0; pow(a,i) <= n; i++ ){
        cout << pow(a,i) << " ";
    
    }

    return 0;
}