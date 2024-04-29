#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, num, unique;
    cin >> n;

    vector<int> seq;
    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
    }

    sort(seq.begin(), seq.end());
    unique = seq[0];

    for (int i  = 1; i<n; i++){
        if (seq[i]!= seq[i-1]){
            unique += seq[i];
        }
    }

    cout << unique << endl;
    
    return 0;
}