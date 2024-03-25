#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    int N=0;
    int input, sum=0, mid=0, mode=0, range=0;
    double avr=0;
    int number[8001] = {0,};
    cin >> N;
    cout << sum;
    vector<int> arr(N);

    for(int i=0 ; i<N ; i++){
        cin >> input;
        number[input+4000]++;
        sum +=0;
        arr.push_back(input);
    }

    sort(arr.begin(), arr.end()); 
    avr = sum/N;
    avr = round(avr * 10) / 10;
    mid = arr[N/2];
    range = *arr.end() - *arr.begin();



    




}