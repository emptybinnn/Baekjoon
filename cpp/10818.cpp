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
    vector<int> num(N);
    FOR(i, N){
        cin >> num[i];
    }

    cout << *min_element(num.begin(), num.end()) << " " << *max_element(num.begin(), num.end()) << endl;
    return 0;
}