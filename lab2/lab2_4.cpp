#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int t, m;
    m = n * 2;

    if ( n <= k ){
        t = 2;
    } else if ( m % k == 0 ){
        t = m / k;
    } else {
        t = m / k;
        t++;
    }

    cout << t << endl;

    return 0;
}