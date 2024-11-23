// Stack as an array -> array implementations -:

#include<iostream>
using namespace std;
class Stack // user defined data structure 
{
    public:
    int arr[5];
    int n=sizeof(arr)/sizeof(arr[0]);
    int idx;
    // constructor 
    Stack()
    {
       idx=-1;
    }

    // Push in stack
    void push(int val)
    {
        if(idx==5) // size = 5
        {
            cout<<"Stack is full ! Overflow "<<endl;
            return ;
        }
        idx++;
        arr[idx]=val;
    }

    // Pop in stack 
    void pop()
    {
        if(idx==-1)
        {
            cout<<"Stack is empty ! Underflow "<<endl;
            return ;
        }
        idx--;
    }

    // top in stack 
    int top()
    {
        if(idx==-1)
        {
            cout<<"Stack is empty ! Underflow "<<endl;
            return -1;
        }
        return arr[idx];
    }

    // size of the stack 
    int size()
    {
        return idx+1;
    }

    // display ele. of the array 
    void displayarr()
    {
        for(int i=0; i<=idx; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Stack st;
    st.pop(); // Stack is empty ! Underflow 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<st.size()<<endl; // 4
    // st.pop();
    cout<<st.top()<<endl; // 40
    st.push(50);
    cout<<st.size()<<endl; // 5
    st.push(45); 
    
    st.push(50); // Stack is full !
    st.push(55); // Stack is full !
    st.push(60); // Stack is full !
    cout<<st.size()<<endl; // 6
    cout<<st.top(); // 45 
    cout<<endl;
    st.displayarr(); // 10 20 30 40 50 45 
 
}

// Stack is empty ! Underflow 
// 4
// 40
// 5
// Stack is full ! Overflow
// Stack is full ! Overflow
// Stack is full ! Overflow
// 6
// 45
// 10 20 30 40 50 45 