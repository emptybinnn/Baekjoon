#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    string str;
    int cnt=1;
    int abc[26] = {0,};

    cin >> str;
    for(int i=0 ; i<str.length(); i++){
        abc[tolower(str[i]) - 'a'] ++;
    }

    int max = -1;
    int max_alpha;
    bool max_is_two = false;
    for(int i=0 ; i<26 ; i++){
        if(abc[i] > max){
            max_is_two = false;
            max_alpha = i;
            max = abc[i];
        }
        else if(abc[i] == max && !max_is_two){
            max_is_two = true;
        }
    }

    if(max_is_two){
        cout << '?' << endl;
    }
    else{
        cout << char(max_alpha + 'A') << endl;
    }



    return 0;
}