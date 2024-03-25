#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, in;
    vector<int> l;
    cin >> N;
    while(N--){
        cin >> in;
        l.push_back(in);
    }
    sort(l.begin(),l.end());
    cin >> M;
    while(M--){
        cin >> in;
        cout << binary_search(l.begin(), l.end(), in) << ' ';

    }

}