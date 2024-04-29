#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> seq1(n);
    set<int> seq2;

    for (int i = 0; i<n; i++){
        cin >> seq1[i];
        if (seq1[i]%2 == 0){
            continue;
        }
        seq2.insert(seq1[i]);
    }

    set<int>::iterator it = seq2.begin();

    while (it != seq2.end()){
        cout << *it << " ";
        it++;
    }

    return 0;
}