#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;

    map<pair<pair<string, int>, pair<string, int> >, int> teams;

    string nickname_1, nickname_2;
    int score_1, score_2;

    for (int i = 0; i<n; i++){
        cin >> nickname_1 >> score_1 >> nickname_2 >> score_2;
        teams[make_pair(make_pair(nickname_1, score_1), make_pair(nickname_2, score_2))] = score_1+score_2;
    }

    map<pair<pair<string, int>, pair<string, int> >, int>::iterator it = teams.begin();

    while (it != teams.end()){
        cout << ((*it).first.first.first) << " and " << ((*it).first.second.first) << " " << ((*it).second) << endl;
        it++;
    }

    return 0;
}