#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, a = - pow(10,9), pos = 0;
    cin >> n;

    int *array = new int[n];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for (int i = 0; i < n; i++){
        for (; array[i] > a;){
            a = array[i];
            pos = ++i;
        }
    }

    cout << pos << endl;

    return 0;
}