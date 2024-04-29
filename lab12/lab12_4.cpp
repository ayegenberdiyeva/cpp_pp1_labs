// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>

// using namespace std;

// int main(){
//     int n, num;

//     vector<int> list;
//     vector<int> gcd;

//     for (int i = 0; i<n; i++){
//         cin >> num;
//         list.push_back(num);
//     }

//     int k;

//     for (int i = 0; i<n; i++){
//         for (int j = i+1; j<n; j++){
//             k = __gcd(list[i], list[j]);
//             gcd.push_back(k);
//         }
//     }

//     int max = 0;

//     for (int i = 0; i<gcd.size(); i++){
//         if (max<gcd[i]){
//             max = gcd[i];
//         }
//     }

//     cout << max << endl;

//     return 0;
// }

#include <iostream> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
int amina(int a, int b) { 
    while (b != 0) { 
        int temp = b; 
        b = a % b; 
        a = temp; 
    } 
    return a; 
} 
 
int main() { 
    int n; 
    cin >> n; 
 
    int array[n]; 
    int counter = 0; 
    
    for (int i = 0; i<n; i++){
        cin >> array[i];
    }

    vector<int> yegnb; 
 
    for (int i = 0; i < n; i++) { 
        for (int j = 1; j < n - i; j++) {   
         yegnb.push_back(amina(array[i],array[i + j])); 
        } 
    } 
 
    sort(yegnb.begin(), yegnb.end()); 
    cout<<yegnb.back()<<endl; 
 
    return 0; 
}