#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m, num;
    cin >> n >> m;

    vector<int> list1(n);
    vector<int> list2(n);

    for (int i = 0; i<n+m; i++){
        cin >> num;
        if (i < n){
            list1.push_back(num);
        } else if (i >= n){
            list2.push_back(num);
        }
    }

    vector<int>::iterator it1 = unique(list1.begin(), list1.begin()+n);
    vector<int>::iterator it2 = unique(list2.begin(), list2.begin()+m);

    list1.resize(distance(list1.begin(), it1));
    list2.resize(distance(list2.begin(), it2));

    vector<int> list3;

    for (int i = 0; i<list1.size()+list2.size(); i++){
        if (i%2 == 0){
            list3[i] = list1[i/2];
        } else if (i%2 == 1){
            list3[i] = list2[i/2];
        }
    }

    vector<int>::iterator it = list3.begin();
    while (it != list3.end()){
        cout << *it << " ";
        it++;
    }

    return 0;
}