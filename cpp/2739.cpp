#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
    
    int N;
    cin >> N;
    FOR(i, 9){
        cout << N << " * " << i+1 << " = " << (i+1)*N << endl;
    }
    return 0;
}