#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

int N;

bool IsPrime(int A){
    if(A <= 1) return false;

    for(int i=2 ; i*i <= A ; i++){
        if(A%i == 0) return false;
    }

    return true;
}

void igemonya(int num, int Digit){
    FOR(i, 10){
        if(IsPrime(num+i)){
            if(N == Digit) cout << num+i << "\n";
            else igemonya((num+i)*10, Digit+1);
        }
    }
}

// void igemonya(int iNumber, int iDigit)
// {
//     for (int i = 0; i <= 9; ++i)
//     {
//         if (true == IsPrime(iNumber + i))
//         {
//             if (N == iDigit)
//             {
//                 cout << iNumber + i << '\n';
//             }
//             else
//                 igemonya((iNumber + i) * 10, iDigit + 1);
//         }
//     }
// }

int main(){
    
    cin >> N;

    igemonya(1, 1);
    // int bound = 1;
    // int prime_list[1000];
    // bool this_is_special_prime;
    // FOR(i, N-1){bound *= 10;}
    // for(int i = bound ; i < 10*bound ; i++){

    //     // cout << i << "\n";
    //     this_is_special_prime = true;
    //     int i_temp = i;

    //     // first test.
    //     if(!(i_temp / bound == 2 ||i_temp / bound == 3 ||i_temp / bound == 5 ||i_temp / bound == 7)) continue;

    //     //second test.
    //     FOR(j, N-1){
    //         if(!(i_temp % 10 == 1 ||i_temp % 10 == 3 ||i_temp % 10 == 7 ||i_temp % 10 == 9)){
    //             this_is_special_prime = false;
    //             break;
    //         }
    //         i_temp /= 10;
    //     }

    //     i_temp = i;
    //     FOR(j, N-1){
    //         i_temp /= 10;
    //         if(IsPrime(i_temp) == false){this_is_special_prime = false; break;}
    //     }

    //     // reccurence but only print when final case.

    //     if(this_is_special_prime){
            
    //         if(i/bound) cout << i << "\n";
    // }
    return 0;
}