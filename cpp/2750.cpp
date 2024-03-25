#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int num[10001] = {0};
    cin >> N;


    int innn;
    for(int i=0 ; i<N ; i++){
        cin >> innn;
        num[innn]++;
    }

    for(int i=0 ; i<10001 ; i++){
        while(num[i]){
            cout << i << "\n";
            num[i]--;
        }
    }
}