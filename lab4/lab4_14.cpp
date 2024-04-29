// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     // for (int i = 0; i<=n; i++){
//     //     int root = sqrt(i);
//     //     if (pow(root, 2) != i){
//     //         cout << i << " is prime" << endl;
//     //     }
//     // }

//     if (n == 2){
//         cout << n << " is prime" << endl;    
//     } else {
//         for (int i = 2; i<=3; i++){
//             cout << i << " is prime" << endl;
//         }

//         if (n>3){
//             bool prime_num = true;
//             for (int i = 4; i<=n; i++){
//                 for (int j = 2; j <= n/2; j++){
//                     cout << i%j << endl;
//                     if (i%j == 0){
//                         prime_num = false;
//                         break;
//                     }
//                 }
//                 if (prime_num == true){
//                     cout << i << " is prime" << endl;
//                 }
//             }
//         }
        
//     }

//     return 0;
// }

/*A prime number (or a prime) is a natural number greater than 1 that cannot be formed by multiplying two smaller natural numbers. Find all prime numbers from 2 to n using a nested for loop.*/
#include <iostream>

using namespace std;

int main(){
    int low = 2, high;
    bool is_prime = true;

    cin >> high;

    // while (low <= high){
    //     is_prime = true;

    //     for (int i = 2; i <= low/2; i++){
    //         if (low%i == 0){
    //             is_prime = false;
    //             break;
    //         }
    //     }
        
    //     if (is_prime){
    //        cout << low << " is prime" << endl;
    //     }

    //     low++;
    // }

    for (int low = 2; low <= high; low++){
        for (int i = 2; i < low/2; i++){
            if (low%2 == 0){
                is_prime = false;
                break;
            }
        }
        
        if (is_prime == true){
            cout << low << " is prime" << endl; 
        }
    }

    return 0;
}