#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int main(){
    string input;
    int count = 0, InRow = 0, numbeforethis;
    bool first = true;

    getline(cin, input);

    for (char ch : input) {
        if(first){
            first = false;
            continue;
        }
        
        int value = ch - 48;

        if (InRow == 0) {
            InRow++;
        } else if (InRow < 3 && value == numbeforethis + 1) {
            InRow++;
        } else {
            InRow = 1;
            if (InRow == 3) {
            count++;
            }
        }
        numbeforethis = value;
        //cout << "Row : " << InRow << " " << "num : " << value << " numbeforethis : " << numbeforethis << " " << count << endl; 
    }

    cout << count << endl;

  return 0;
}