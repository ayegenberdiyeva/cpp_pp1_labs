#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i<n; i++){
        cin >> ar[i];
    }

    int z;
    cin >> z;

    if (z>0){
        for (int i = n-z; i<n; i++){
            cout << ar[i] << " ";
        }
        for (int i = 0; i<n-z; i++){
            cout << ar[i] << " ";
        }
    } else {
        for (int i = -z; i<n; i++){
            cout << ar[i] << " ";
        }
        for (int i = 0; i<-z; i++){
            cout << ar[i] << " ";
        }
    }

    return 0;
}