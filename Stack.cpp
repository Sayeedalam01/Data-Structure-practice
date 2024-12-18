#include<iostream>
using namespace std;

const int MaxSize = 5;
int Stack[MaxSize];
int Top = 0;

bool isEmpty(){
    return (Top == 0);
}

bool isFull(){
    return (Top == MaxSize);
}

bool push(int Element){
    if(isFull()){
        cout << "Stack is Full.\n";
        return false;
    }
    Stack[Top] = Element;
    Top++;
    return true;
}

bool pop(){
    if(isEmpty()){
        cout << "Stack is Empty.\n";
        return false;
    }
    Top--;
    return true;
}

int topElement(){
    if(isEmpty()){
        cout << "Stack is empty" <<endl;
        return -1;
    }
    return Stack[Top - 1];
}

void show(){
    if(isEmpty()){
        cout << "Stack is empty.\n";
    return;
    }
    for(int i = Top - 1; i>=0; i--){
        cout << Stack[i] <<" ";
    }
    cout <<endl;
}

int main(){

    cout <<topElement() <<endl;

    pop();
    push(33);
    push(520);
    push(1080);
    pop();

    cout <<topElement() <<endl;

    push(60);
    push(70);
    push(80);
    push(90);

    show();

    cout <<topElement() <<endl;
    return 0;
}
