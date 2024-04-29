#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, count;
    cin >> n;

    vector<int> seq;
    vector<int>::iterator it;

    for (int i = 0; i<n ; i++){
        cin >> count;
        seq.push_back(count);
    }

    reverse(seq.begin(), seq.end());

    for (it = seq.begin(); it != seq.end(); it++){
        cout << *it << " ";
    }

    return 0;
}