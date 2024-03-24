#define FOR(i,N) for(int i=0 ; i<N ; i++)

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){

    int A, B;
    cin >> A >> B;
    cout << A+B << "\n" << A-B << "\n" << A*B << "\n" << A/B << "\n" << A%B << endl;

    return 0;
}