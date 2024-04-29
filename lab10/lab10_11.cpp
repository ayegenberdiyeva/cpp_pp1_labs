#include <iostream>
#include <vector>

using namespace std;

bool prim(int a){
    if (a == 0 || a == 1){
        return false;
    }

    for (int j = 2; j<a; j++){
        if (a%j == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n, num, cnt = 0;
    cin >> n;

    vector<int> seq;
    for (int i = 0; i<n; i++){
        cin >> num;
        if (num<0){
            num = -num;
        }
        seq.push_back(num);
        if (prim(seq[i]) == true){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}