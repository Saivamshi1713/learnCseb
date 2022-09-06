//C++ program to implement stack operations using Arrays this is modified


#include <iostream>
using namespace std;
#define max 50
class stackk
{
    public:
    //int max=50;
    int st[max];
    int top=-1;
    
    void push()
    {
        int element;
        cout<<"enter the element to be pushed: ";
        cin>>element;
        if(top==max-1)
        {
            cout<<"stack is full"<<endl;
            return;
        }
        else
        {
            top=top+1;
            st[top]=element;
            cout<<"element is pushed"<<endl;
        }
        
    }
    
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        else
        {
            cout<<"element popped is "<<st[top];
            top=top-1;
        }
        return;
    }
    
    void display()
    {
        cout<<"stack elements are: "<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<st[i]<<endl;
        }
    }
};

int main()
{
    stackk stk;
    int option;
    
    while(1)
    {
        cout<<endl<<"Stack Operations"<<endl;
        cout<<"1. push"<<endl<<"2. pop"<<endl<<"3. Display"<<endl<<"4. exit"<<endl;
        cout<<"enter the option: ";
        cin>>option;
    
        switch(option)
        {
            case 1: 
                stk.push();
                break;
            case 2: 
                stk.pop();
                break;
            case 3:
                stk.display();
                break;
            case 4:
                exit(1);
            default:
                cout<<"wrong entry enter the correct option"<<endl;
        }
    }
    return 0;   
}
