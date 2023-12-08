#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class stack{
    int* arr;
    int size;
    int top1;
    int top2;

    stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size
    }
    void push1(int data){
        if(top2-top1==1){
            cout<<"overflow"<<endl;
        }
        top1++;
        arr[top1] = data;

    }
    void push2(int data){
        if(top2-top1==1){
            cout<<"overflow"<<endl;
        }
        else{
            top2--;
            arr[top2] = data;
        }
       

    }
    void pop1(int data){
        if(top1 == -1){
            cout<<"underflow"<<endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }
      


    }
    void pop2(int data){
        if(top2 == size){
            cout<<"underflow"<<endl;
        }
        else{
            arr[top2] = 0;
            top2++;
        }
      


    }
    void print(){
        cout<<endl;
        cout<<"Top1" << top1<<endl;
        cout<<"Top2" << top2<<endl;
        for(int i =0;i<size;i++){
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }
};


int maon(){
    satack st(6);
   st.print();
    return 0;

}