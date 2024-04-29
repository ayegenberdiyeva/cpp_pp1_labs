#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    long long n, num, count = 0;
    cin >> n;

    vector<long long> list;
    for (int i = 0; i<n; i++){
        cin >> num;
        list.push_back(num);
    }
    
    sort(list.begin(), list.end());

    for (int i = 0; i<list.size(); i++){
        if(list[i] == list[i+1]){
            count++;
            if (list[i+1] == list[i+2]){
                count--;
            }
        }
    }

    cout << count << endl;

    return 0;
}