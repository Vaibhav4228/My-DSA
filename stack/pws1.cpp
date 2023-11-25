#include<iostream>
#include<climits>
using namespace std;

class Stack {
    int capacity;
    int* arr;
    int top;
public:
    Stack(int c) {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data) {
        if (this->top == this->capacity - 1) {
            cout << "Overflow\n";
            return;
        }
        this->top++;

        this->arr[this->top] = data;
    }

    int pop() {
        if (this->top == -1) {
            return INT_MIN;
        }
        int poppedValue = this->arr[this->top];
        this->top--;
        return poppedValue;
    }

    int getTop() {
        if (this->top == -1) {
            cout << "UNDERFLOW\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty() {
        return this->top == -1;
    }

    int size() {
        return this->top + 1;
    }

    bool isFull() {
        return this->top == this->capacity - 1;
    }
};

int main() {
    Stack st(5); // Specify the capacity when creating the stack
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.getTop() << "\n";
    st.push(4);
    st.push(5);
    cout << st.getTop() << "\n";
    st.push(8);

    st.pop();

    cout<<st.getTop() << "\n";
    return 0;
}

// class Solution {
// public:
//     int longestValidParentheses(string s) {
//         stack<int> st;
//         st.push(-1);
//         int maxlength = 0;
//         for(int i=0; i<s.length(); i++)
//         {
//             char ch = s[i];
//             if(ch == '(') {
//                 st.push(i);
                
//             }
//             else {
//                 st.pop();
//                 if(st.empty()) {
//                     st.push(i);
//                 }
//                 else {
//                     int len = i - st.top();
//                     maxlength = max(len, maxlength);
//                 }

//             }

//         }
//         return maxlength;
//     }
// };


