#include <iostream>
#include <stack>
using namespace std;

bool checkValidParantheses(string s){
    stack<char> st;
    for(auto i:s){
        if(i=='(' || i=='[' || i=='{'){
            st.push(i);
        }
        else if(i == ')' && st.top)
    }
}

int main()
{
   

    return 0;
}