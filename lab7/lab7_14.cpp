#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int ar[n], dif[n-1];
    for (int i  = 0; i<n; i++){
        cin >> ar[i];
    }
    sort(ar, ar + n);

    bool timelimit = true;

    for (int i = 0; i<n-1; i++){
        dif[i] = ar[i+1] - ar[i];
        if (dif[i]<=k){
            timelimit = false;
            break;
        }
    }

    if (timelimit == true){
        cout << "no" << endl;
    } else{
        cout << "cheater" << endl;
    }

    return 0;
}