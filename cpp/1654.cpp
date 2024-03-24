#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
    int K, N;
    cin >> K >> N ;
    vector<long long> lensun(K);

    FOR(i,K){
        cin >> lensun[i];
    }

    long long mid;
    long long min = 1;
    long long max = *max_element(lensun.begin(), lensun.end());
    long long anx = 0;
    while (min <= max)
    {
        int possible = 0;
        mid = (min + max)/2;
        FOR(i, K){
            possible += lensun[i]/mid;
            if(possible >= N) break;
        }

        if(possible >= N){ // 됐당
            //cout << "seong_gong mid : " << mid << ", min : " << min << ", max : " << max << endl;
            min = mid+1;
            if(anx < mid) anx = mid;

            continue;
        }
        else{ // 안됐당
            //cout << " silpae mid : " << mid << ", min : " << min << ", max : " << max << endl;
            max = mid-1;
            continue;
        }
    }
    // int possible = 0;
    // FOR(i, K){
            
    //         possible += lensun[i]/mid;
    //         if(possible >= N) break;
    //     }

    //     if(possible >= N){ // 됐당
    //         cout << "seong_gong mid : " << mid << ", min : " << min << ", max : " << max << endl;
    //         min = mid+1;
    //     }


    cout << anx << endl;
}