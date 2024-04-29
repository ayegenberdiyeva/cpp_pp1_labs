#include <iostream> 

using namespace std;

int main(){
    int n, z;
    cin >> n;

    int ar[n];
    for (int i = 0; i<n; i++){
        cin >> ar[i];
    }

    cin >> z;

    bool binary_search = true;

    for (int i = 0; i<n; i++){
        if (ar[i] == z){
            cout << "Yes" << endl;
            binary_search = true;
            break;
        }
        binary_search = false;
    }

    if (binary_search == false){
        cout << "No" << endl;
    }

    return 0;
}