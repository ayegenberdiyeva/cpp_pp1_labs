/* 
#include <iostream>

using namespace std;

int main(){
    int n, n1, maxi;
    cin >> n;
    
    
    for ( int i = 0; i < n; i++ ) {
        cin >> n1;
        if ( i == 0 ){
            maxi = n1;
        } else {
            if ( n1 > maxi){
                maxi = n1;
            }
        }
        
    }

    cout << maxi << endl;


    return 0;
} */

#include <iostream>

using namespace std;

int main(){
    int n, n1, maxi = -100;
    cin >> n;
    
    for ( int i = 0; i < n; i++ ) {
        cin >> n1;
        if ( n1 > maxi )
            maxi = n1;
        
    }

    cout << maxi << endl;


    return 0;
}