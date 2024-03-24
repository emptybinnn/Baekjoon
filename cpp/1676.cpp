#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << (n/5) + (n/25) + (n/125) << endl;

    return 0;
}