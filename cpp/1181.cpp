#define FOR(i,n) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

bool soso(string a, string b){
    return(a.length() != b.length() ? a.length() < b.length() : a < b);
}

int main(){
    int N; 
    cin >> N;

    vector<string> words(N);
    FOR(i, N){
        cin >> words[i];
    }

    sort(words.begin(), words.end(), soso);

    FOR(i, N){
        if(words[i] == words[i+1]) continue;
        cout << words[i] << "\n";
    }

    return 0;
}