#include <iostream>

using namespace std;

void lucky_ticket(string n){
    int sum = 0, last_d = n[(n.size())-1] - 48;
    for (int i = 0; i<n.size(); i++){
        int k = ((int) n[i]) - 48;
        sum += k;
    }

    if (sum%last_d == 0){
        cout << "Yes" << endl;
    } else
        cout << "No"<< endl;
}

int main(){
    string ticket;
    cin >> ticket;

    lucky_ticket(ticket);

    return 0;
}