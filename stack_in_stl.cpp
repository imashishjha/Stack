// for using stl library of stack u must include<stac> but instead of all of these
// u can just include<bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;

int main(){

  // first u have to initialise the stack like: stack<datatype> name;
  stack<int> st;
  
  // for pushing element 

  st.push(23);
  st.push(22);
  st.push(34);
  st.push(78);
 
 //here we will check out stack empty or not 
 // if not empty we will print element and pop the stack, so top will move downwards
  while(!st.empty()){
      cout<<st.top()<<endl;
      st.pop();
  }

}
