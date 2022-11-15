#include <iostream>

using namespace std;
#define n 100 

class queue {
    int *arr;
    int top;
    
    
    public:
    queue(){
        arr= new int[n];
       top=-1;
    }
    
    void push(int x){
        if(top==n-1)
        {
            cout<<"Stack is overflow";
            return;
        }
         top++;
         arr[top]=x;
       
        
    }
    
    void pop(){
        if(top==-1 ){
            cout<<"Stack is empty";
            return;
        }
            
        
        top--;
        
    }
    int peek(){
        if(top==-1 ){
             return -1;
             }
        else
           return arr[top];
    }
           

    bool isempty(){
        if(top ==-1 ){
          
            return true;
        }
        else
        return false;
        
    }   
     
    
};

int main()
{
    queue q;
    q.push(9);
    q.pop();
    q.push(8);
    q.pop();
    q.push(90);
    q.push(80);
    
    if(q.peek()==-1)
    {
        cout<<"Queue is Empty";
    }
    else
    cout<<q.peek();
    

    return 0;
}
