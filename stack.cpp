#include<iostream>
using namespace std;
#include<stack>
class Mystack
{
public:
int top;
int size;
int *arr;

Mystack(int size){
this->size=size;
arr=new int[size];
top=-1;
}
void push(int element){
if(size-top>1){
  top++;
  arr[top]=element;  
}else{
    cout<<"stack overflow"<<endl;
}
}
void pop(){
    if(top>=0){
        top--;

    }else{
        cout<<"stack underflow"<<endl;
    }

}
int peak(){
    if(top>=0)
return arr[top];
else
return -1;
}
bool isEmpty(){
if(top==-1)
return true;
else
return false;

}

};







int main(){
    Mystack st(5);
    st.push(34);
    st.push(90);
    st.push(54);
    st.push(24);
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
return 0;
}