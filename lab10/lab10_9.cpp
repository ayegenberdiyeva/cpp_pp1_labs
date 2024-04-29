#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, num;
    cin >> n;

    vector<int> seq;
    vector<int> orig_seq;

    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
        orig_seq.push_back(num);
    }

    reverse(seq.begin(), seq.end());

    for (int i = 0; i<n; i++){
        if (seq[i] != orig_seq[i]){
            cout << "Instead of " << orig_seq[i] << " here was " << seq[i] << endl;
        } else {
            cout << "OK" << endl;
        }
    }

    return 0;
}