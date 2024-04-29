#include <iostream>

using namespace std;

int main(){
    int n, n1, z = 0;
    cin >> n;
   for ( int i = 0; i < n; i++ ) {
        cin >> n1;
       
        for (; n1 > 0; n1 /= 10) {
            if ( n1 % 10 == 0 ){
            z++;
            }
            
    } 
    }
cout << z << endl;
return 0;
}
