#include <iostream>

using namespace std;

void Valid_Num(string n){
    bool Is_Value_Even = false;
    for (int i = 0; i<n.size(); i++){
        int k = (int) n[i];
        if ( k%2 == 0){
            Is_Value_Even = true;
        } else {
            Is_Value_Even = false;
            break;
        }
    }

    if (Is_Value_Even == true){
        cout << "Valid" << endl;
    } else 
        cout << "Not valid" << endl;
    
}

int main(){
    string n;
    cin >> n;

    Valid_Num(n);

    return 0;
}