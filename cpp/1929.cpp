#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if(n==2){
        return true;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main(){
    int M, N;
    cin >> M >> N;
    for (int i = M; i <= N; ++i) {
        if (isPrime(i)) {
            cout << i << "\n";
        }
    }
    
    return 0;
}