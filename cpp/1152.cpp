#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char strr[1000001];
    int cnt=1;
    cin.getline(strr, sizeof(strr));
    int len = static_cast<int>(strlen(strr));
    
    if (strr[0] == ' ' && len >0){cnt--;}
    for(int i =  1; i < len ; i++){
        if(isalpha(strr[i]) && strr[i-1] == ' '){cnt++;}
    }

    cout << cnt << endl;
    return 0;
}