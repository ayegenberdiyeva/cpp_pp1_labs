#include <iostream>

using namespace std;

int gcd(int a, int b){
    int c = 1;
    if (b%a == 0){
        c = b/a;
    }

    return c;
}

int main(){
    int n, largest = 0, node = 0, ind = 1000;
    cin >> n;

    int a[n];
    for (int i = 0; i<n; i++){
        cin >> a[i];
        if (a[i]>largest){
            largest = a[i];
        }
    }

    for (int i = 0; i<n; i++){
        if (gcd(a[i], largest) < node){
            node = gcd(a[i], largest);
            ind = i;
        }
    }

    cout << a[ind] << endl;

    return 0;
}