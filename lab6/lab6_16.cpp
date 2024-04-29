#include <iostream>

using namespace std;

int positive_num(int n){
    if (n < 0){
        n = n - (2*n);
    }

    cout << n << endl;
    
    return 0;
}

int main(){
    int n;
    cin >> n;

    positive_num(n);

    return 0;
}