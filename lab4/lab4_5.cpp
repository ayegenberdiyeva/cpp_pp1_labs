//Write a program that generates triangle made of [*].

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    for (int i = 0; i<n; i++){
        for (int j = 0; j<=i; j++){
            cout << "[*]";
            if ( j == i){
                cout << endl;
            }
        }
    }

    return 0;
}