//Here You have to create stack using array passed as parameter

#include <bits/stdc++.h>

using namespace std;

struct Stack
{
    int size;
    int top;
    int *s; // this is pointer which will point to integer type array in heap
};


void create(struct Stack *st, int size){

    st->top =-1;
    st->s= new int[size];
    st->size =size;

}

void display(struct Stack st){
    int i;
    if(st.top == -1){
        cout<<"stack is empty";
    }
    for(int i = st.top; i>=0; i--){
        cout<<st.s[i]<<endl;
    }
}

// Lets write function to push elements in out stack
// x is valur to be given

void Push(struct Stack *st, int x){

     if(st->top == st->size-1){
         cout<<"Stack Overflow"<<endl;
     }else{
         st->top++;
         st->s[st->top]=x;
     }

} 


int pop(struct Stack *st){
    int x =-1;
    if(st->top == -1)
      cout<<"stack underflow";
    
    else{
        x= st->s[st->top];
        st->top--;
    }
  return x;
}

int main(){
int n;
   cin>>n;
   
   struct Stack st;

   create(&st, n);
   
   Push(&st, 12);
   Push(&st, 114);
   Push(&st, 122);
   Push(&st, 192);
   display(st);


}