#include <iostream>
using namespace std;

int main(){

    int numm;
    int num;
    int max = -1;
    for(int i=0 ; i<9 ; i++){
        cin >> numm;
        if(max < numm){
            max = numm;
            num = i;
        }
    }
    cout << max << "\n" << num+1 << endl;
    return 0;
}