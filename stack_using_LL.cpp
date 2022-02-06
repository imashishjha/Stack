#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    struct ListNode *next;
};

ListNode *top = NULL;

void Push(int x)
{

    ListNode *t = new ListNode();

    if (t == NULL)
    {
        cout << "Stack Overflow";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

void POP(){
    ListNode* p= top;
    if(top == NULL){
        cout<<"Stack Underflow";
    }else{
      top= top->next;
      delete(p);
    }
}

void Display()
{
    struct ListNode *p;
    p = top;
    while (p != NULL)
    {
        cout<<p->data<<endl;
        p = p->next;
    }
}

int main()
{
    Push(5);
    Push(6);
    Push(45);
    Push(15);
    Push(25);
    POP();
    Display();

}