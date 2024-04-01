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
    int pop(int inp){
        int temp;
        
        if(front == rear){
            return -1;
        }

        temp = queue[0];
        for(int i=0 ; i <=(rear-1) ; i++){
            queue[i] = queue[i+1];
        }
        return temp;
    }
    int size(){
        return rear+1;
    }

    int empty(){
        if(front == rear){
            return 1;
        }
        else {
            return 0;
        }
    }
    
    int front(){
        if(front == rear){
            return -1;
        }
        else{
            return(queue[front]);
        }
    }

    int back(){
        if(front == rear){
            return -1;
        }
        else{
            return(queue[rear]);
        }
    }

}