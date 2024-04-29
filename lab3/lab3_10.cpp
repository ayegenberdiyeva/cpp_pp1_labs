#include <iostream>

using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m;

    int ar[n];

    for (int i = 0; i<n; i++){
        cin >> ar[i];
    }

    for (int i = 0; ar[i] <= m; i++){
        if( ar[i] == m){
            a = i;
        }
        else {
            a = i + 1;
        }
    }

    cout << a << endl;

    return 0;
}