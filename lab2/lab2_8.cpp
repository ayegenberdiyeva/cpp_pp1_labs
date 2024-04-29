#include <iostream>

using namespace std;

int main(){
    int n, n1, e = 0, o = 0;
    cin >> n;
    
    for ( int i = 0; i < n; i++ ) {
        cin >> n1;
        if ( n1 % 2 == 0 ){
            e++;
        } else {
            o++;
        }

}
    cout << e << " " << o << endl;
    return 0;
}