#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, num, k;
    cin >> n;

    vector<int> seq;
    vector<int>::iterator it;

    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
    }

    cin >> k;

    seq.erase(seq.begin()+k);

    for (it = seq.begin(); it!=seq.end(); it++){
        cout << *it << " ";
    }

    return 0;
}