#include <iostream>

using namespace std;

int main(){
    int n, last_val = 0, j, k = 0;
    cin >> n;

    int ar[n];

    for (int i = 0; i<n; i++){
        cin >> ar[i];
    }

    for (int i = 0; i<n; i++){
        if( ar[i] == last_val){
            continue;
        } else { 
            cout << ar[i] << " ";
            last_val = ar[i];
    }
    }

    return 0;
}