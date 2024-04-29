#include <iostream>
#include <map>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n, day;
    string name;
    cin >> n;

    map<string, set<int> > attendance;

    for (int i = 0; i<n; i++){
        cin >> name >> day;
        attendance[name].insert(day);
    }

    for (auto x : attendance){
        cout << x.first << " ";
        if (x.second.size() < 3){
            cout << "NO BONUS" << endl;
        } else {
            cout << "+1" << endl;
        }
    }

    return 0;
}