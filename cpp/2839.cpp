#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;

    int res = 0;
    while (N >=3){
        if(N%5==0){
            res += N/5;
            N = 0;
            break;
        }
        else{
            N -= 3;
            res++;
        }
    }

    if (N==0) cout << res << "\n";
    else cout << -1 << "\n";
    return 0;
}