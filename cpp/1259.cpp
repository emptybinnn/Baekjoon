#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
    int p = 1;
    while(p){
        string num;
        cin >> num;

        if(num == "0") break;

        int is_palin = 1;
        FOR(i, num.size()/2){
            if(num[i] != num[num.size()-1 -i]) { is_palin--; break;}
        }

        if(is_palin) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}