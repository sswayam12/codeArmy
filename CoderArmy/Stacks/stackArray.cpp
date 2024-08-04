#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;

    public:
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }

    void push(int value){
        if(top == size-1)
        return;

        else{
            top++;
            arr[top] = value;
            cout<<value<<endl;
        }
    }

    void pop(){
        if(top == -1)
        return;

        else{
            // cout<<arr[top]<<endl;
            top--;
        }
    }

    int peek(){

        if(top == -1)
        return -1;

        else{
            return arr[top];
        }

    }

    bool isEmpty(){

        if(top == -1)
        return -1;
    }

    int isSize(){
        return top + 1;
    }
};

int main(){

    Stack S(5);
    S.push(5);
    S.push(6);
    S.push(3);
    S.push(4);
    S.push(5);
    S.pop();


}