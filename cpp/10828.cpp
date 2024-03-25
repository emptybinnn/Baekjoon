#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

struct stack{
    int arr[10000];
    int last;

    void init(){
        last = -1;
    }

    void push(int data) {
        arr[++last] = data;
    }
    bool empty() {
        return (last < 0);
    }
    int pop() {
		if (empty()) {
			return -1;
		}
		return arr[last--];
	}
	int size() {
		return last + 1;
	}
	int top() {
		if (empty()) {
			return -1;
		}
		return arr[last];
	}

};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    stack st;
    st.init();
    while(n--){
        string str;
        int num;
        cin >> str;
        if (str == "push") {
			cin >> num;
			st.push(num);
		}
		if (str == "pop") {
			cout << st.pop() << "\n";
		}
		if (str == "size") {
			cout << st.size() << "\n";
		}
		if (str == "empty") {
			cout << st.empty() << "\n";
		}
		if (str == "top") {
			cout << st.top() << "\n";
		}
    }

    return 0;
}