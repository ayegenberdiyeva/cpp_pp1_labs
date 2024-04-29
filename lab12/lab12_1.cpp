#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n, k, num;
    long long min = pow(10,9);
    cin >> n;

    vector<int> list;
    for (int i = 0; i<n; i++){
        cin >> k;
        list.push_back(k);
    }

    cin >> k;

    for (int i = 0; i<n; i++){
        if (k<list[i]){
            if (min>list[i]-k){
                min = list[i]-k;
                num = i;
            }
        } else {
            if (min>k-list[i]){
                min = k-list[i];
                num = i;
            }
        }
    }

    cout << num << endl;

    return 0;
}