#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    if ( n > m ){
        cout << "1" << endl;
    } else if ( m > n ){
        cout << "2" << endl;
    } else {
        cout << "0" << endl;
    }


    return 0;
}