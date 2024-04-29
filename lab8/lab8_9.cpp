#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k, num;
    cin >> n;

    vector<int> seq;
    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
    }

    cin >> k;

    bool found = false;
    for (int i = 0; i<n; i++){
        if (seq[i] == k){
            found = true;
        }
    }

    if (found == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}