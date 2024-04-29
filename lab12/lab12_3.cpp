#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    int ar[n];
    int k;
    
    for (int i = 0; i<n; i++){
        cin >> ar[i];
        k ^= ar[i];
    }

    bool powerful = true;
    
    while (k!=1){
        if (k%2 != 0){
            powerful = false;
        }
        k /= 2;
    }

    if (powerful == true){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}