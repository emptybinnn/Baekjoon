#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
    //cout << "a";
    int N, cnt=0;
    cin >> N;
    long long num=0;
    long long num_temp;
    int yugida;
    while(cnt != N){
        num++;
        yugida = 0;
        num_temp = num;
        while(num_temp > 0){
            if(num_temp%10 == 6)yugida++;
            else yugida = 0;

            if(yugida == 3) {cnt++; break;}
            //else{cout << num << " is not 666 num.\n";}
            num_temp/=10;
        }
    }
    cout << num << endl;

    return 0;
}