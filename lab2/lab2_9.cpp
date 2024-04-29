#include <iostream>

using namespace std;

int main(){
    int n, n1, a = 0;
    cin >> n;
    
    for ( int i = 0; i < n; i++ ) {
        cin >> n1;
        if ( n1 % 10 == 7){
            a++;
        }

}
    cout << a << endl;
    return 0;
}