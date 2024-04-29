#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, num;
    cin >> n;

    vector<int> seq;
    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
    }

    sort(seq.begin(), seq.end());

    int dif = seq[seq.size()-1] - seq[0];

    cout << dif << endl;

    return 0;
}