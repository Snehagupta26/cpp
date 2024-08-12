#include<iostream>
#include<stack>
using namespace std;
bool validparathesis(string s){
    stack<char> st;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '[' || s[i] == '{' ||s[i] == '(' ){
            st.push(s[i]);
        }
        else if(s[i] == ']' || s[i] == '}' ||s[i] == ')' ){
            if (st.empty() || 
                (s[i] == ']' && st.top() != '[') ||
                (s[i] == '}' && st.top() != '{') ||
                (s[i] == ')' && st.top() != '(')) {
                return false;
            }
            st.pop();
        }
        
    }
    return true;
    
}
int main(){
    string s = "[{(})]";
   cout<< validparathesis(s);

}