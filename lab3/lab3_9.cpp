#include <iostream>

using namespace std;

int main(){
    int n, l, r, temp;
    cin >> n >> l >> r;

    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    int j = r-1;

    for (int i = 0; i < n; i++){
        if (i >= l-1 && i <= l-1+((r-l)/2)){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                j--;
            
        }
    }

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    return 0;
}