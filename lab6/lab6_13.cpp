#include <iostream>

using namespace std;

void reverse_array(int n, int ar[]){
    int i = n-1;
    while (i>=0){
        cout << ar[i] << " ";
        i--;
    }
}

int main(){
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i<n; i++){
        cin >> ar[i];
    }

    reverse_array(n, ar);
    return 0;
}