#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k, num, sum = 0;
    cin >> n;

    vector<int> seq;
    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
    }

    sort(seq.begin(), seq.end());

    cin >> k;

    for (int i = seq.size()-k; i<seq.size(); i++){
        sum += seq[i];
    }

    cout << sum << endl;

    return 0;
}