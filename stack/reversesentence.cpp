#include<iostream>
#include<stack>
using namespace std;
void reverse(string s){
    stack<string> st;
      
      for(int i = 0 ; i < s.length() ; i++){
        string ans = "";
        while(s[i] != ' ' && i < s.length()){
            ans+=s[i];
            i++;
        }
        st.push(ans);
      }
      while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
      }
      cout<<endl;
      
}
int main(){
    string s = "hello how are you?";
    reverse(s);
}