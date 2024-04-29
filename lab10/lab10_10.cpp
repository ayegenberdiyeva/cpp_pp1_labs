#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, m, num;

    cin >> n >> m;

    vector <int> seq;

    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
    }

    rotate(seq.begin(), seq.begin()+m, seq.end());
    reverse(seq.begin(), seq.end());

    vector<int>::iterator it = seq.begin();

    while (it != seq.end()){
        cout << *it << " ";
        it++;
    }

    return 0;
}