#include<bits/stdc++.h>
using namespace std;
int main(){
    int num_frnd, fnc_ht, frnd_ht, rd_width = 0;

    cin >> num_frnd >> fnc_ht;

    for(int i = 0; i < num_frnd; i++){
        cin >> frnd_ht;
        if(frnd_ht > fnc_ht){
            rd_width+=2;
        }else{
            rd_width++;
        }
    }
    cout << rd_width << endl;

    return 0;
}
