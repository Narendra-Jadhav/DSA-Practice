#include <iostream>
using namespace std;

//* Stack Implementation using Array
class Stack {
    //* properties
    public:
        int *arr;
        int top;
        int size;

    //* behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        }
        else {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        }
        else {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(45);
    st.push(29);
    st.push(29);
    st.push(12);
    st.push(35);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();

    if (st.isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is Not empty" << endl;
    }
    
    return 0;
}