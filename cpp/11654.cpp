#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
    int N;
    string s;
    cin >> N >> s;

    int sum=0;
    FOR(i,N){
        sum += s[i] - '0';
        cout << sum << endl;
    }

    cout << sum;
    return 0;
}