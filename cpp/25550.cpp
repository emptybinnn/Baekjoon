#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int rows, cols;

  cin >> rows >> cols;
  long long array[rows][cols];

    // get input
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> array[i][j];
    }
  }
    
    // calculate sum
    long long sum = 0;
    std::vector<long long> numbers;
    for (int i = 1; i < rows-1; i++) {
        for (int j = 1; j < cols-1; j++) {
            numbers.push_back(array[i][j]-1);
            numbers.push_back(array[i][j-1]);
            numbers.push_back(array[i][j+1]);
            numbers.push_back(array[i+1][j]);
            numbers.push_back(array[i-1][j]);
            
            long long min_value = *std::min_element(numbers.begin(), numbers.end());
            if(min_value == -1) min_value++;
            //cout << array[i][j]-1 << endl;
            sum += min_value;
            numbers.clear();
            //array[i][j]++;
        }
    }

  cout << sum << endl;

  return 0;
}