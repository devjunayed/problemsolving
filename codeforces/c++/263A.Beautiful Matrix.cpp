#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cin >> x;
            if(x == 1){
              cout << abs(i-2) + abs(j-2) << endl;
            }
        }
    }



    return 0;
}
