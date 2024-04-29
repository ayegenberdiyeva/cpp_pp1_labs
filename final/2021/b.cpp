#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int num = 1;

    vector<int> list;

    while (num != 0){
        cin >> num;
        if (num == 0){
            break;
        }
        list.push_back(num);
    }

    sort(list.begin(), list.end());

    int ar[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i<list.size(); i++){
        ar[list[i]-1]++;
    }

    for (int i = 0; i<9; i++){
        cout << ar[i] << " ";
    }

    return 0;
}