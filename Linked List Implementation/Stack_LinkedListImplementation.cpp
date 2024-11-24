#include<iostream>
#include<stack>
using namespace std;
class Node     // ->  val of the curr node , address of the next node 
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class Stack
{
    public:
    Node* head;
    int size;
    Stack()
    {
        head=NULL;
        size=0;
    }

    void push(int val)
    {
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }

    void pop()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty! ";
            return;
        }
        head=head->next;
        size--;
    }

    int top()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty! ";
            return -1;
        }
        return head->val;
    }

    void display() // LL Display 
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Stack st;
    cout<<st.top()<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    st.display();

    st.pop();
    st.display();

    cout<<st.size<<endl;

    cout<<st.top()<<endl;
    
    st.display();

}

// Stack is empty! -1
// 70 60 50 40 30 20 10
// 60 50 40 30 20 10
// 6
// 60
// 60 50 40 30 20 10