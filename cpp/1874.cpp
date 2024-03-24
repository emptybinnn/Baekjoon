#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <set>

using namespace std;

int main(){
    int N;
    cin >> N;
    int squence[N];
    stack<int> s;
    int num_to_push = 1;
    string output;

    FOR(i,N){
        int input;
        cin >> input;
        squence[i] = input;
    }

    FOR(i, N){
        // if(s.empty()){

        //     s.push(num_to_push++);
        //     output.append("+\n");

        //     while(s.top() !=squence[i]){
        //         s.push(num_to_push++);
        //         output.append("+\n");
        //     }
        //     s.pop();
        //     output.append("-\n");
        // }
        // else{
        if(s.top() == squence[i]){ // if correct, then pop it.
            s.pop();
            output.append("-\n");
        } else if(s.top() < squence[i] || s.empty()){ // if not correct, push till correct apear.
            s.push(num_to_push++);
            output.append("+\n");

            while(s.top() !=squence[i]){
            s.push(num_to_push++);
            output.append("+\n");
            }

            s.pop();
            output.append("-\n");
            
        } else{
            cout << "NO\n";
            return 0;
        }
        // }

    }

    cout << output;

    return 0;
}