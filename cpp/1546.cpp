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
    int max = -1;
    float sum = 0;
    FOR(i, N){
        int score;
        cin >> score;
        sum += score;
        if(max < score) max = score;
    }
    cout << (sum/N) / max *100 << endl;
    return 0;
}