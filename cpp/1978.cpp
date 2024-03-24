#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

bool sosuni(int n){
    if(n <= 1) return false;
    
    for(int i=2 ; i*i <= n ; i++){
        if(n%i ==0) return false;
    }
    return true;
}

int main(){
    int N, cnt = 0;
    cin >> N;
    FOR(i, N){
        int a;
        cin >> a;
        if(sosuni(a)) cnt++;
    }

    cout << cnt <<endl;
    return 0;
}