#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n, point, overall = 0;
    string name;
    cin >> n;

    map<string, int> scores;

    for (int i = 0; i<n; i++){
        cin >> name >> point;
        overall += point;
        scores[name] += point;
    }

    map<string, int>::iterator it = scores.begin();

    while (it != scores.end()){
        it->second = (it->second)*100/overall;
        it++;
    }

    sort(scores.begin(), scores.end());

    it = scores.begin();

    while (it != scores.end()){
        cout << it->first << " " << it->second << "%" << endl;
        it++;
    }

    return 0;
}