#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int seq[n];

    for (int i = 0; i<n; i++){
        if (i<2){
            for (int i = 0; i<n; i++){
                seq[i] = i;
            }
        } else {
            seq[i] = seq[i-1] + seq[i-2];
        }
    }

    cout << seq[n-1] << endl;

    return 0;
}