#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, num, k, a;
    cin >> n;

    vector<int> seq;
    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
    }

    cin >> k >> a;

    seq.insert(seq.begin()+k, a);

    vector<int>::iterator it = seq.begin();

    while ( it!= seq.end()){
        cout << *it << " ";
        it++;
    }

    return 0;
}