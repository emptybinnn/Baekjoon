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
    input = input + "0";
    for (char ch : input) {
        
        int value = ch - 48;

        if (InRow == 0) {
            InRow++;
        } else if (value == numbeforethis + 1) {
            InRow++;
        } else {
            if (InRow == 3) {
            count++;
            }
            InRow = 1;
        }

        numbeforethis = value;
        //cout << "Row : " << InRow << " " << "num : " << value << " numbeforethis : " << numbeforethis << " " << count << endl; 
    }

    cout << count << endl;

  return 0;
}