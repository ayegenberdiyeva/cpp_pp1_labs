#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool new_sort(vector<int> v1, vector<int> v2){
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i<v1.size(); i++){
        sum1 += v1[i];
    }
    for (int i = 0; i<v2.size(); i++){
        sum1 += v2[i];
    }

    // if (sum1 > sum2){
    //     return false;
    // } else if (sum2 > sum1){
    //     return true;
    // } else if (v1.size() > v2.size()) {
    //     return false;
    // } else if (v2.size() > v1.size()) {
    //     return true;
    // } else {
    //     for (int i = 0; i<v1.size(); i++){
    //         if (v1[i] > v2[i]){
    //             return false;
    //         } else if (v2[i] > v1[i]){
    //             return true;
    //         }
    //     }
    //     return true;
    // }

    if(sum1>sum2){
		return false;
    }else{
		if(sum1<sum2){
			return true;
		}else{
			if(v1.size()>v2.size()){
				return false;
			}
			else{
				if(v1.size()<v2.size()){
					return true;
				}else{
					for(int i = 0;i<v1.size();i++){
						if(v1[i]>v2[i]){
							return false;
						}else{
							if(v1[i]<v2[i]){
								return true;
							}
						}
					}
					return true;
				}
			}
		}
	}
}

int main(){
    int n;
    cin >> n;

    vector<vector<int> > main_v;

    for (int i = 0; i<n; i++){
        int size;
        cin >> size;
        
        vector<int> temp_v;
        int k;
        
        for (int j = 0; j<size; j++){
            cin >> k;
            temp_v.push_back(k);
        }
        
        main_v.push_back(temp_v);
    }

    sort(main_v.begin(), main_v.end(), new_sort);

    for (int i = 0; i<main_v.size(); i++){
        for (int j = 0; j<main_v[i].size(); j++){
            cout << main_v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}