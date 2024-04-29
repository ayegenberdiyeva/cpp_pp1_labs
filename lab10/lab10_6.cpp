#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    double sum_credit = 0, sum_gp_cr = 0, gp;
    cin >> n;
    
    for (int i = 0; i<n; i++){
        vector<int> subj;
        for (int j = 0; j<4; j++){
            int k;
            cin >> k;
            subj.push_back(k);
            if (j==3){
                if ((subj[0]+subj[1]) >= 30 && subj[2] >= 20){
                    double point = (subj[0]+subj[1]+subj[2]-50)/5;
                    gp = 1 + point*1/3;
                } else {
                    gp = 0;
                }
                sum_gp_cr += (gp*subj[3]);
                sum_credit += subj[3];
            }
        }
    }

    double gpa = sum_gp_cr / sum_credit;

    cout << gpa << endl;
    
    return 0;
}
