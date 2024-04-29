#include <iostream>

using namespace std;

void New_Array(int n, int ar_a[], int ar_b[], int ar_c[]){
    for (int i = 0; i<n; i++){
        if ( ar_a[i] > ar_b[i] ){
            ar_c[i] = ar_a[i] - ar_b[i];
        }
        if ( ar_a[i] <= ar_b[i] ){
            ar_c[i] = ar_b[i] - ar_a[i];
        }
        cout << ar_c[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;

    int ar_a[n], ar_b[n], ar_c[n];

    for (int i = 0; i<n; i++){
        cin >> ar_a[i];
    }

    for (int i = 0; i<n; i++){
        cin >> ar_b[i];
    }

    New_Array(n, ar_a, ar_b, ar_c);

    return 0;
}