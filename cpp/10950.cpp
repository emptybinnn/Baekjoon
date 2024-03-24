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

    FOR(i,N){
        int A, B;
        cin >> A >> B;
        cout << A+B << "\n";
    }
    return 0;
}