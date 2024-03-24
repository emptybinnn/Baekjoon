#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    int n1, n2, n3;
    int num_of_num;

    cin >> n1 >> n2 >> n3;

    int arr[10] = {0};

    int res = n1*n2*n3;

    for(int i=res;i>0;i/=10)
		arr[i%10]++;
	
	for(int i=0;i<10;i++)
		printf("%d\n",arr[i]);

    
}