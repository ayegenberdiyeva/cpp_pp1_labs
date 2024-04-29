#include <iostream>

using namespace std;

// // int main(){
// //     int n;
// //     cin >> n;

// //     for (int i = 2; i < n; i++){
// //         if ( n%i == 0){
// //             cout << i << endl;
// //             break;
// //         }
// //     }

// //     return 0;
// // }


// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(){
//     int n, root = 0;
//     cin >> n;

//     root = sqrt(n);

//     if ( n%(sqrt(n)) == 0){
//         cout << "YES" << endl;
//     }
//     else 
//         cout << "NO" << endl;

//     return 0;
// }


int main(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a <= x && b <= y+(x-a)){
        cout << "YES" << endl;
        cout << a << "<=" << x << " " << b << "<=" << y+(x-a) << endl;
    } else
        cout << "NO" << endl;
}
