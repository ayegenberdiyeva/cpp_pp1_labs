#include <iostream>
#include <algorithm>

using namespace std;

void how_many_equals(int size, int ar_a[], int ar_b[]){
    int pairs = 0;
    sort(ar_a, ar_a + size);
    sort(ar_b, ar_b + size);

    int i = 0, j = 0;
    while (i!=size && j!=size){
        if (ar_a[i] == ar_b[j]){
            pairs++;
            i++;
            j++;
        } else if (ar_a[i] > ar_b[j]){
            j++;
        } else if (ar_a[i] < ar_b[j]){
            i++;
        }
    }
    
    cout << pairs << endl;
}


int main(){
    int size;
    cin >> size;

    int ar_a[size], ar_b[size];
    for (int i = 0; i<size; i++){
        cin >> ar_a[i];
    }
    
    for (int i = 0; i<size; i++){
    cin >> ar_b[i];
    }

    how_many_equals(size, ar_a, ar_b);

    return 0;
}