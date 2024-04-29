// #include <iostream>

// using namespace std;

// void Check_ID(int &n, int ar[], int &x){
//     int ans = 0;

//     for (int i = 0; i<n; i++){
//         if (x == ar[i]){
//             ans = 1;
//             return;
//         } else {
//             ans = 0;
//         }
//     }

//     if ( ans == 0){
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
// }

// int main(){
//     int n;
//     cin >> n;

//     int ar[n];
//     for (int i = 0; i<n; i++){
//         cin >> ar[i];
//     }

//     int x;
//     cin >> x;

//     Check_ID(n, ar, x);

//     return 0;
// }


#include <iostream>

using namespace std;

void Find_ID( int num_of_books, int id, int books[]){
    bool is_id_checked = false;

    for (int i = 0; i<num_of_books; i++){
        if(books[i] != id){
            is_id_checked = false;
        } else {
            is_id_checked = true;
            break;
        }
    }

    if (is_id_checked == true){
        cout << "Yes" << endl;
    } else
        cout << "No" << endl;
}

int main(){
    int num_of_books;
    cin >> num_of_books;

    int books[num_of_books];

    for (int i = 0; i<num_of_books; i++){
        cin >> books[i];
    }

    int id;
    cin >> id;

    Find_ID(num_of_books, id, books);

    return 0;
}