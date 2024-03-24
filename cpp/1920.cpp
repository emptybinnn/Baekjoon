// #define FOR(i,N) for(int i=0 ; i<N ; i++)

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <set>

// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     vector<int> nums1(N);

//     FOR(i,N){
//         cin >> nums1[i];
//     }
//     sort(nums1.begin(), nums1.end());


//     int M;
//     cin >> M;
//     vector<int> nums2(M);
//     int nums3;

//     FOR(i,M){
//         cin >> nums3;
//         if(binary_search(nums1.begin(), nums1.end(), nums3)) cout << "1\n";
//         else cout << "0\n";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define FOR(i, N) for(int i = 0; i < N; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> nums1(N);
    int input;
    set<int> numSet;

    FOR(i, N) {
        cin >> input;
        numSet.insert(input);
    }

    int M;
    cin >> M;
    int nums3;

    FOR(i, M) {
        cin >> nums3;
        if (numSet.find(nums3) != numSet.end()) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
    }

    return 0;
}
