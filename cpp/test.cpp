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
    float score = 0, d=0.995;
    int solved = 1;
    while (score < 170){
        score = 175*(1-d);
        solved++;
        d *= 0.995;
        cout << score << "\n";
        if(solved == 31) break;
    }
    cout << solved << "\n";
}