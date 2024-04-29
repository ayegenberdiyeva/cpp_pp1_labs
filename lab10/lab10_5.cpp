#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n;

    string city;
    double count;
    int all = 0;

    map<string, double> list;

    for (int i = 0; i<n; i++){
        cin >> m;
        for (int j = 0; j<m; j++){
            cin >> city >> count;
            list[city] += count;
            all += count;
        }
    }

    map<string, double>::iterator it = list.begin();

    while (it != list.end()){
        cout << it->first << " " << it->second *100 /all << endl;
        it++;
    }

    return 0;
}