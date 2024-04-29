#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, num, a, b;
    cin >> n;

    vector<int> seq;
    vector<int>:: iterator it;

    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
    }

    cin >> a >> b;

    seq.erase(seq.begin()+a, seq.begin()+b+1);

    for (it = seq.begin(); it != seq.end(); it++){
        cout << *it << " ";
    }

    return 0;
}