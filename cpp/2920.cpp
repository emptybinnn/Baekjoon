 #include <iostream>
 #include <array>
using namespace std;

int main(){
    
    int H[8];
    int ascending=0;
    for(int i=0 ; i<8 ; i++){
        cin >> H[i];
    }
    for(int i=0 ; i<7 ; i++){
        if(H[i] < H[i+1]) {ascending++; }
        if(H[i] > H[i+1]) {ascending--; }
    }
    if(ascending==7) {cout << "ascending" << endl;}
    else if(ascending==-7) {cout << "descending" << endl;}
    else {cout << "mixed" << endl;}
    
    return 0;
}