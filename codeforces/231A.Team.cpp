#include<bits/stdc++.h>
using namespace std;
int main(){
    int problem, sol_count = 0;
    cin >> problem;

    for(int i = 0; i < problem; i++){
        int p, v, t;
        cin >> p >> v >> t;
        if(p+v+t >=2 && p+v+t <=3){
            sol_count++;
        }
    }
    cout << sol_count << endl;

    return 0;
}
