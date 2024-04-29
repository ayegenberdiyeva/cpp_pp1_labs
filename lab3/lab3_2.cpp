#include <iostream>


using namespace std;

int main(){
    int n, b = 0;
    cin >> n;

    int *array = new int[n];

    for (int i = 0; i < n; ++i){
        cin >> array[i];
    }

    for (int a = 0; a < n; ++a){
        if (array[a] > 0){
            b++;
        }
    }
    cout << b << endl;

    return 0;
}