#define FOR(i,N) for(int i=0 ; i<N ; i++)

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <set>
// #include <queue>

// using namespace std;

// int main(){
//     int N;
//     cin >> N;

//     FOR(i,N){
//         int num, t_location, t_value;

//         int num_of_same_value_after_last_prior = 0;
//         int count_of_bigger_one = 0;
//         int between_of_that = 0;
//         bool yet_not_find_first_prior_location = true;
//         int cnt = 0, target = 0;
//         cin >> num >> t_location;
//         vector<int> q(num);


//         FOR(j, num){
//             cin >> q[j];
//             if(j == t_location) {
//                 t_value= q[j];
//             }
//             if(j > t_location){ // count higher priority after location
                
//                 if(q[j] > t_value) {
//                     num_of_same_value_after_last_prior = 0;
//                     yet_not_find_first_prior_location = false;
//                     count_of_bigger_one++;
//                 }
//                 // if(q[j] == t_value && yet_not_find_first_prior_location){
//                 //     between_of_that++;
//                 // }   
//                 if(q[j] == t_value) {
//                     num_of_same_value_after_last_prior++;
//                     // cout << "++" << endl;
//                 }

//             }
            
//         }


//         FOR(j, t_location){
//             if(q[j] > t_value) count_of_bigger_one++;
//             if(q[j] == t_value) between_of_that++;
//         }
//         // cout << endl;
//         // cout << count_of_bigger_one << " " << num_of_same_value_after_last_prior << " " << between_of_that+1 << "\n";
//         cout << count_of_bigger_one + num_of_same_value_after_last_prior + between_of_that+1 << "\n";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int T;
    cin >> T;

    while(T-->0){
        int n, m;
        cin >> n >> m;

        queue<pair<int, int>> q;
        priority_queue<int> pq;
        

        FOR(i, n){
            int priory;
            cin >> priory;
            q.push({priory, i});
            pq.push(priory);

        }

        int time=0;
        while(!q.empty()){
            int cur_pri = q.front().first;
            int cur_pos = q.front().second;
            q.pop();

            if(cur_pri == pq.top()){
                time++;
                pq.pop();

                if(cur_pos == m){
                    cout << time << endl;
                    break;
                }
            } else {
                q.push({cur_pri, cur_pos});
            }
        }
    }

    return 0;
}