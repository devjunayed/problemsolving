#include<bits/stdc++.h>
using namespace std;
int main(){
    int total_word, wc, i;
    string word;

    cin >> total_word;

    for(i = 0; i < total_word; i++){
        cin >> word;
        wc = word.length();
        if(wc > 10){
            cout << word[0] << wc-2 << word[wc-1] << endl;
        }else{
            cout << word << endl;
        }

    }


    return 0;
}
