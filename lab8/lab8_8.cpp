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

    sort(seq.begin(), seq.end());

    vector<int>::iterator it = seq.begin();

    for (; it < seq.begin()+k; it++){
        cout << *it << " ";
    }

    return 0;
}