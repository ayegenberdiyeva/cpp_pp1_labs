#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if (j+i == n-1){
                cout << i+1 << " ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }

    return 0;
}