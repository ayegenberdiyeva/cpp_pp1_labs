#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(vector<int> v, int i){
    for (int j = 2; j<v[i]; j++){
        if(v[i]%j==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, num, k;
    cin >> n;

    vector<int> seq;

    for (int i = 0; i<n; i++){
        cin >> num;
        seq.push_back(num);
    }

    cin >> k;

    int count = 0;

    for (int i = 0; i<n; i++){
        if (seq[i]>k && isPrime(seq, i)==true){
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}