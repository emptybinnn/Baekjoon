#include <iostream>
using namespace std;

struct Queue {
    int front = 0, rear = 0, capacity = 10000;
    int* queue;
    
    Queue (int c){
        front = rear = 0;
        capacity = c;
        queue = new int[c];
    }
    ~Queue() {
        delete[] queue;
    }

    void push(int inp){
        if (rear == capacity){
            cout << "queue is full!\n";
        }
        else {
            queue[rear] = inp;
            rear++;
        }
    }
    int pop(){
        int temp;
        
        if(front == rear){
            return -1;
        }

        temp = queue[0];
        for(int i=0 ; i <=(rear-1) ; i++){
            queue[i] = queue[i+1];
            rear--;
        }
        return temp;
    }
    int size(){
        return rear;
    }

    int empty(){
        if(front == rear){
            return 1;
        }
        else {
            return 0;
        }
    }
    
    int front_value(){
        if(front == rear){
            return -1;
        }
        else{
            return(queue[front]);
        }
    }

    int back_value(){
        if(front == rear){
            return -1;
        }
        else{
            return(queue[rear]);
        }
    }

};

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int N, X;
	string op;
	cin >> N;
    int capacity = 10000;
	struct Queue Q(capacity);
 
	for (int i = 0; i < N; i++) {
		cin >> op;
		if (op == "push") {
			cin >> X;
			Q.push(X);
		}
		else if (op == "pop") {
            cout << Q.pop() << '\n';
		} else if (op == "size") {
			cout << Q.size() << '\n';
		} else if (op == "empty") {
			cout << Q.empty() << '\n';
		} else if (op == "front") {
		    cout << Q.front_value() << '\n';
		} else if (op == "back") {
			cout << Q.back_value() << '\n';
		}
	}
}