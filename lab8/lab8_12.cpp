#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, num, unique = 1;
    cin >> n;

    vector<int> seq;
    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
    }

    sort(seq.begin(), seq.end());
    for (int i  = 1; i<n; i++){
        if (seq[i]!= seq[i-1]){
            unique++;
        }
    }

    cout << unique << endl;
    
    return 0;
}