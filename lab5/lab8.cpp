#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int ans = 0, zeros_count = 0;
    cin >> s;

    int ar[10] = {0};

    for ( int i = 0; i < s.size(); i++){
        int k = (int) s[i];
        if ( k >= 48 && k <= 57){
            ar[k-48] += 1;
        }
    }

    // for (int i = 0; i < 10; i++){
    //     cout << ar[i] << " ";
    //     if ( ar[i] == 0){
    //         zeros_count++;
    //     }
    // }

    // for (int i = 0; i < 10-zeros_count; i++){
    //     if (ar[i] == 0){
    //         for (int j = i; j< 10-zeros_count; j++){
    //             ar[j] = ar[j+1];
    //         }
    //     }
    // }

    // for (int i = 1; i < 10-zeros_count; i++){
    //     if (ar[i] == ar[0]){
    //         ans = 1;
    //     }
    //     else {
    //         ans = 0;
    //         break;
    //     }
    // }

    // if (ans == 1){
    //     cout << "YES" << endl;
    // }
    // else 
    //     cout << "NO" << endl;

    bool is_non_zero_val_checked = false;

    for (int i = 0; i < 10; i++){
        if (is_non_zero_val_checked){
            break;
        } 
        if (ar[i] != 0){
            is_non_zero_val_checked = true;
            for (int j = i+1; j<10; j++){
                if (ar[i] == ar[j] || ar[j] == 0){
                    continue;
                } else {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}